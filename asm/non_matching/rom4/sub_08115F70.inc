	THUMB_FUNC_START sub_08115F70
sub_08115F70: @ 0x08115F70
	push {r4,lr}
	ldr r4, _08115F9C  @ =gRam
	ldr r1, _08115FA0  @ =0x00001754
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #20
	bl __modsi3
	ldr r1, _08115FA4  @ =0x00000968
	add r4, r4, r1
	ldrh r4, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080DD0E0
	add r0, r4, #0
	bl sub_080AF4FC
	pop {r4}
	pop {r0}
	bx r0
_08115F9C:
	.4byte gRam
_08115FA0:
	.4byte 0x00001754
_08115FA4:
	.4byte 0x00000968
	THUMB_FUNC_END sub_08115F70

