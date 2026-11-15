	THUMB_FUNC_START sub_0807B888
sub_0807B888: @ 0x0807B888
	push {lr}
	ldr r3, _0807B8B4  @ =gRam
	ldr r1, _0807B8B8  @ =0x000016C5
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B8AE
	ldr r1, _0807B8BC  @ =0x000016C1
	add r0, r3, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0807B8AE
	bl sub_0807B43C
_0807B8AE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B8B4:
	.4byte gRam
_0807B8B8:
	.4byte 0x000016C5
_0807B8BC:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_0807B888

