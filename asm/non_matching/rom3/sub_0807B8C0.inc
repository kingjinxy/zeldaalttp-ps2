	THUMB_FUNC_START sub_0807B8C0
sub_0807B8C0: @ 0x0807B8C0
	push {lr}
	ldr r3, _0807B8EC  @ =gRam
	ldr r1, _0807B8F0  @ =0x000016C5
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0807B8E6
	ldr r1, _0807B8F4  @ =0x000016C1
	add r0, r3, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B8E6
	bl sub_0807B43C
_0807B8E6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B8EC:
	.4byte gRam
_0807B8F0:
	.4byte 0x000016C5
_0807B8F4:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_0807B8C0

