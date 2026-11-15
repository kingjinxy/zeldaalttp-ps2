	THUMB_FUNC_START sub_08115F14
sub_08115F14: @ 0x08115F14
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08115F38  @ =gRam
	ldr r2, _08115F3C  @ =0x00000996
	add r1, r1, r2
	ldrb r2, [r1]
	mov r1, #8
	and r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #25
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_0811571C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115F38:
	.4byte gRam
_08115F3C:
	.4byte 0x00000996
	THUMB_FUNC_END sub_08115F14

