	THUMB_FUNC_START sub_081334D8
sub_081334D8: @ 0x081334D8
	push {lr}
	ldr r1, _08133500  @ =gRam
	ldr r2, _08133504  @ =0x00000B6E
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081334FC
	ldr r2, _08133508  @ =0x000009C6
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #67
	beq _081334F8
	cmp r0, #69
	beq _081334F8
	cmp r0, #71
	bne _081334FC
_081334F8:
	bl sub_08131710
_081334FC:
	pop {r0}
	bx r0
_08133500:
	.4byte gRam
_08133504:
	.4byte 0x00000B6E
_08133508:
	.4byte 0x000009C6
	THUMB_FUNC_END sub_081334D8

