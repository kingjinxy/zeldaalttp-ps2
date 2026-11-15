	THUMB_FUNC_START sub_08108A88
sub_08108A88: @ 0x08108A88
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _08108AD8  @ =gRam
	ldr r0, _08108ADC  @ =0x00000EE2
	add r2, r1, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #8
	mov r5, #0
	strb r0, [r2]
	ldr r0, _08108AE0  @ =0x00000ED2
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #16
	strb r0, [r1]
	add r0, r4, #0
	bl sub_08107520
	ldr r0, _08108AE4  @ =gUnknown_02010992
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #2
	strb r5, [r0]
	add r0, r0, #2
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	ldr r1, _08108AE8  @ =gUnknown_02010996
	mov r0, #255
	strb r0, [r1]
	add r0, r4, #0
	bl sub_08108AEC
	pop {r4,r5}
	pop {r0}
	bx r0
_08108AD8:
	.4byte gRam
_08108ADC:
	.4byte 0x00000EE2
_08108AE0:
	.4byte 0x00000ED2
_08108AE4:
	.4byte gUnknown_02010992
_08108AE8:
	.4byte gUnknown_02010996
	THUMB_FUNC_END sub_08108A88

