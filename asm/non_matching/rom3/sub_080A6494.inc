	THUMB_FUNC_START sub_080A6494
sub_080A6494: @ 0x080A6494
	push {r4,lr}
	ldr r3, _080A64D8  @ =gRam
	ldr r0, _080A64DC  @ =0x00000978
	add r4, r3, r0
	mov r0, #0
	strh r0, [r4]
	ldr r1, _080A64E0  @ =0x00000964
	add r0, r3, r1
	ldr r1, _080A64E4  @ =gUnknown_08169EE7
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #255
	beq _080A64F0
	ldr r2, _080A64E8  @ =0x0000096C
	add r0, r3, r2
	strh r1, [r0]
	ldr r0, _080A64EC  @ =gUnknown_0816B392
	add r0, r1, r0
	ldrb r2, [r0]
	mov r0, #248
	and r1, r1, r0
	cmp r1, #0
	bne _080A64F0
	mov r1, #197
	lsl r1, r1, #5
	add r0, r3, r1
	strh r2, [r0]
	mov r0, #2
	strh r0, [r4]
	mov r0, #0
	b _080A64F2
	.byte 0x00
	.byte 0x00
_080A64D8:
	.4byte gRam
_080A64DC:
	.4byte 0x00000978
_080A64E0:
	.4byte 0x00000964
_080A64E4:
	.4byte gUnknown_08169EE7
_080A64E8:
	.4byte 0x0000096C
_080A64EC:
	.4byte gUnknown_0816B392
_080A64F0:
	mov r0, #1
_080A64F2:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080A6494

