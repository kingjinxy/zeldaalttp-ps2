	THUMB_FUNC_START sub_0810405C
sub_0810405C: @ 0x0810405C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r4, r3, #0
	ldr r5, _081040A4  @ =gRam
	ldr r1, _081040A8  @ =0x00000FF2
	add r0, r5, r1
	add r6, r3, r0
	ldrb r1, [r6]
	cmp r1, #150
	bhi _081040BC
	ldr r2, _081040AC  @ =0x00000FB2
	add r0, r5, r2
	add r4, r3, r0
	add r0, r1, #0
	add r0, r0, #107
	strb r0, [r4]
	ldr r0, _081040B0  @ =0x00001082
	add r1, r5, r0
	add r1, r3, r1
	sub r2, r2, #224
	add r0, r5, r2
	add r0, r3, r0
	ldrb r2, [r0]
	mov r0, #16
	and r0, r0, r2
	strb r0, [r1]
	cmp r0, #0
	bne _08104100
	ldr r0, _081040B4  @ =0x00000EE2
	add r1, r5, r0
	add r1, r3, r1
	ldr r2, _081040B8  @ =gUnknown_0817BB84
	ldrb r0, [r4]
	b _081040F6
	.byte 0x00
	.byte 0x00
_081040A4:
	.4byte gRam
_081040A8:
	.4byte 0x00000FF2
_081040AC:
	.4byte 0x00000FB2
_081040B0:
	.4byte 0x00001082
_081040B4:
	.4byte 0x00000EE2
_081040B8:
	.4byte gUnknown_0817BB84
_081040BC:
	ldr r0, _08104108  @ =0x00000EE2
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #8
	strb r0, [r2]
	ldr r1, _0810410C  @ =0x00000FB2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r6]
	add r0, r0, #107
	strb r0, [r7]
	ldr r0, _08104110  @ =0x00001082
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r2]
	mov r3, #16
	mov r0, #16
	and r0, r0, r2
	eor r0, r0, r3
	strb r0, [r1]
	cmp r0, #0
	bne _08104100
	ldr r2, _08104114  @ =0x00000ED2
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _08104118  @ =gUnknown_0817BB84
	ldrb r0, [r7]
	sub r0, r0, #2
_081040F6:
	add r0, r0, r2
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
_08104100:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08104108:
	.4byte 0x00000EE2
_0810410C:
	.4byte 0x00000FB2
_08104110:
	.4byte 0x00001082
_08104114:
	.4byte 0x00000ED2
_08104118:
	.4byte gUnknown_0817BB84
	THUMB_FUNC_END sub_0810405C

