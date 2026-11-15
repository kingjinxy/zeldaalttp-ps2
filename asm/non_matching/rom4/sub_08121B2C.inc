	THUMB_FUNC_START sub_08121B2C
sub_08121B2C: @ 0x08121B2C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08121BE0  @ =gRam
	ldr r3, _08121BE4  @ =0x00000DC5
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _08121BE8  @ =0x00000DD9
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _08121BEC  @ =0x00000DCF
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	add r4, r4, #3
	add r3, r2, r4
	strb r1, [r3]
	ldr r4, _08121BF0  @ =0x00000DE3
	add r1, r2, r4
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _08121BF4  @ =0x00000965
	add r0, r2, r4
	strb r1, [r0]
	ldr r1, _08121BF8  @ =0x00001830
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _08121BA2
	mov r0, #1
	and r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	asr r1, r1, #31
	mov r0, #16
	and r1, r1, r0
	ldrh r0, [r3]
	add r0, r0, r1
	ldr r2, _08121BFC  @ =0x00000952
	add r1, r4, r2
	ldrh r1, [r1]
	sub r0, r0, r1
	strh r0, [r3]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #239
	bhi _08121BDC
_08121BA2:
	ldr r3, _08121BF8  @ =0x00001830
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _08121C04
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r0, r0
	asr r0, r0, #31
	mov r1, #16
	and r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	ldrh r1, [r2]
	add r1, r1, r0
	ldr r3, _08121C00  @ =0x00000958
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	strh r1, [r2]
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #159
	bls _08121C04
_08121BDC:
	mov r0, #1
	b _08121C06
_08121BE0:
	.4byte gRam
_08121BE4:
	.4byte 0x00000DC5
_08121BE8:
	.4byte 0x00000DD9
_08121BEC:
	.4byte 0x00000DCF
_08121BF0:
	.4byte 0x00000DE3
_08121BF4:
	.4byte 0x00000965
_08121BF8:
	.4byte 0x00001830
_08121BFC:
	.4byte 0x00000952
_08121C00:
	.4byte 0x00000958
_08121C04:
	mov r0, #0
_08121C06:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08121B2C

