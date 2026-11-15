	THUMB_FUNC_START sub_080FD220
sub_080FD220: @ 0x080FD220
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #0
	ldr r2, _080FD268  @ =gRam
	ldr r3, _080FD26C  @ =0x000009DA
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FD236
	mov r1, #1
_080FD236:
	cmp r1, #0
	beq _080FD258
	ldr r1, _080FD270  @ =0x00001022
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bhi _080FD258
	ldr r1, _080FD274  @ =gUnknown_0817A940
	add r0, r4, #0
	mov r2, #1
	bl sub_080C9480
	ldr r1, _080FD278  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080FD258:
	ldr r1, _080FD27C  @ =gUnknown_0817A8A8
	add r0, r4, #0
	mov r2, #19
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
_080FD268:
	.4byte gRam
_080FD26C:
	.4byte 0x000009DA
_080FD270:
	.4byte 0x00001022
_080FD274:
	.4byte gUnknown_0817A940
_080FD278:
	.4byte gUnknown_03003E74
_080FD27C:
	.4byte gUnknown_0817A8A8
	THUMB_FUNC_END sub_080FD220

