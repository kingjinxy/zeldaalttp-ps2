	THUMB_FUNC_START sub_08132280
sub_08132280: @ 0x08132280
	push {r4,r5,lr}
	ldr r0, _081322CC  @ =gRam
	ldr r2, _081322D0  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r2, r0, #0
	cmp r1, #0
	bne _08132330
	ldr r5, _081322D4  @ =0x000009D6
	add r4, r2, r5
	mov r0, #32
	strb r0, [r4]
	ldr r0, _081322D8  @ =0x000009D7
	add r3, r2, r0
	mov r0, #64
	strb r0, [r3]
	add r5, r5, #2
	add r1, r2, r5
	mov r0, #128
	strb r0, [r1]
	sub r5, r5, #18
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #64
	beq _08132330
	cmp r0, #64
	bgt _081322DC
	cmp r0, #3
	beq _081322FE
	cmp r0, #3
	ble _08132330
	cmp r0, #5
	beq _081322FE
	cmp r0, #7
	beq _081322FE
	b _08132330
_081322CC:
	.4byte gRam
_081322D0:
	.4byte 0x000009B2
_081322D4:
	.4byte 0x000009D6
_081322D8:
	.4byte 0x000009D7
_081322DC:
	cmp r0, #69
	beq _08132318
	cmp r0, #69
	bgt _081322EA
	cmp r0, #67
	beq _08132318
	b _08132330
_081322EA:
	cmp r0, #71
	beq _08132318
	cmp r0, #91
	bne _08132330
	mov r0, #83
	strb r0, [r4]
	mov r0, #79
	strb r0, [r3]
	mov r0, #137
	b _0813232E
_081322FE:
	ldr r0, _08132310  @ =0x000009D6
	add r1, r2, r0
	mov r0, #38
	strb r0, [r1]
	ldr r5, _08132314  @ =0x000009D7
	add r1, r2, r5
	mov r0, #140
	b _0813232E
	.byte 0x00
	.byte 0x00
_08132310:
	.4byte 0x000009D6
_08132314:
	.4byte 0x000009D7
_08132318:
	ldr r0, _08132338  @ =0x000009D6
	add r1, r2, r0
	mov r0, #38
	strb r0, [r1]
	ldr r5, _0813233C  @ =0x000009D7
	add r1, r2, r5
	mov r0, #74
	strb r0, [r1]
	ldr r0, _08132340  @ =0x000009D8
	add r1, r2, r0
	mov r0, #135
_0813232E:
	strb r0, [r1]
_08132330:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132338:
	.4byte 0x000009D6
_0813233C:
	.4byte 0x000009D7
_08132340:
	.4byte 0x000009D8
	THUMB_FUNC_END sub_08132280

