	THUMB_FUNC_START sub_08119324
sub_08119324: @ 0x08119324
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _08119390  @ =gRam
	ldr r2, _08119394  @ =0x00000E15
	add r1, r5, r2
	add r1, r0, r1
	mov r3, #0
	mov r2, #61
	strb r2, [r1]
	ldr r2, _08119398  @ =0x00000E29
	add r1, r5, r2
	add r1, r0, r1
	strb r3, [r1]
	add r2, r2, #10
	add r1, r5, r2
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	ldr r1, _0811939C  @ =0x00000DC5
	add r4, r5, r1
	add r4, r0, r4
	ldrb r2, [r4]
	add r1, r1, #20
	add r3, r5, r1
	add r3, r0, r3
	ldrb r1, [r3]
	lsl r1, r1, #8
	add r1, r1, #12
	add r2, r2, r1
	strb r2, [r4]
	lsr r2, r2, #8
	strb r2, [r3]
	ldr r2, _081193A0  @ =0x00000DCF
	add r3, r5, r2
	add r3, r0, r3
	ldrb r2, [r3]
	ldr r1, _081193A4  @ =0x00000DE3
	add r5, r5, r1
	add r5, r0, r5
	ldrb r1, [r5]
	add r1, r1, #255
	lsl r1, r1, #8
	add r1, r1, #248
	add r2, r2, r1
	strb r2, [r3]
	lsr r2, r2, #8
	strb r2, [r5]
	mov r1, #110
	bl sub_080C19F8
	pop {r4,r5}
	pop {r0}
	bx r0
_08119390:
	.4byte gRam
_08119394:
	.4byte 0x00000E15
_08119398:
	.4byte 0x00000E29
_0811939C:
	.4byte 0x00000DC5
_081193A0:
	.4byte 0x00000DCF
_081193A4:
	.4byte 0x00000DE3
	THUMB_FUNC_END sub_08119324

