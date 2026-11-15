	THUMB_FUNC_START sub_081334B4
sub_081334B4: @ 0x081334B4
	push {lr}
	ldr r0, _081334D0  @ =gRam
	ldr r1, _081334D4  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _081334CA
	bl sub_08130FF8
_081334CA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081334D0:
	.4byte gRam
_081334D4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_081334B4

