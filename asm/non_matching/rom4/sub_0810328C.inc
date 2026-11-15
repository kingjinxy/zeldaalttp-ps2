	THUMB_FUNC_START sub_0810328C
sub_0810328C: @ 0x0810328C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _081032B6
	ldr r0, _081032BC  @ =gRam
	ldr r1, _081032C0  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C3758
	add r0, r4, #0
	bl sub_080C35C0
_081032B6:
	pop {r4}
	pop {r0}
	bx r0
_081032BC:
	.4byte gRam
_081032C0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810328C

