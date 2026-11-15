	THUMB_FUNC_START sub_0806F428
sub_0806F428: @ 0x0806F428
	push {r4-r7,lr}
	ldr r5, _0806F524  @ =gRam
	ldr r0, _0806F528  @ =0x000009E3
	add r4, r5, r0
	ldrb r2, [r4]
	mov r0, #1
	eor r2, r2, r0
	strb r2, [r4]
	ldr r1, _0806F52C  @ =0x00000AB4
	add r0, r5, r1
	ldrb r0, [r0]
	ldr r3, _0806F530  @ =0x000009E4
	add r1, r5, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	orr r2, r2, r0
	ldr r7, _0806F534  @ =0x000009E2
	add r0, r5, r7
	strb r2, [r0]
	ldr r0, _0806F538  @ =0x00000B7C
	add r2, r5, r0
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	mov r7, #184
	lsl r7, r7, #4
	add r1, r5, r7
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r3, _0806F53C  @ =0x00000AA8
	add r0, r5, r3
	ldrh r3, [r0]
	lsr r3, r3, #4
	ldr r7, _0806F540  @ =0x0000096C
	add r0, r5, r7
	strh r3, [r0]
	ldr r0, _0806F544  @ =0x000009DA
	add r6, r5, r0
	ldrh r2, [r6]
	lsl r2, r2, #1
	ldr r1, _0806F548  @ =gUnknown_02002000
	add r2, r2, r1
	ldr r7, _0806F54C  @ =0x00000AA6
	add r0, r5, r7
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	add r7, r7, #8
	add r1, r5, r7
	ldrh r1, [r1]
	orr r0, r0, r1
	orr r3, r3, r0
	strh r3, [r2]
	ldrb r0, [r4]
	ldr r3, _0806F550  @ =gUnknown_0814CE0C
	lsl r1, r0, #1
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r2, [r0]
	add r7, r7, #218
	add r0, r5, r7
	strh r2, [r0]
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r3
	ldrh r1, [r1]
	ldr r2, _0806F554  @ =0x00000B8A
	add r0, r5, r2
	strh r1, [r0]
	mov r0, #2
	bl sub_0806C814
	ldr r3, _0806F558  @ =0x000009AD
	add r1, r5, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r4]
	cmp r0, #0
	bne _0806F5C8
	sub r7, r7, #10
	add r2, r5, r7
	mov r1, #128
	lsl r1, r1, #2
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	add r7, r7, #4
	add r1, r5, r7
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldrh r2, [r6]
	ldr r7, _0806F55C  @ =0x000009DC
	add r3, r5, r7
	strh r2, [r3]
	ldr r1, _0806F560  @ =0x00000A22
	add r0, r5, r1
	ldrh r0, [r0]
	mov r1, #207
	and r1, r1, r0
	cmp r1, #137
	beq _0806F506
	cmp r1, #139
	bne _0806F568
_0806F506:
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	ldr r2, _0806F564  @ =0x00000CF4
	add r0, r5, r2
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r6]
	mov r0, #128
	lsl r0, r0, #1
	ldrh r1, [r6]
	sub r1, r1, #1
	bl sub_0806F090
	b _0806F582
_0806F524:
	.4byte gRam
_0806F528:
	.4byte 0x000009E3
_0806F52C:
	.4byte 0x00000AB4
_0806F530:
	.4byte 0x000009E4
_0806F534:
	.4byte 0x000009E2
_0806F538:
	.4byte 0x00000B7C
_0806F53C:
	.4byte 0x00000AA8
_0806F540:
	.4byte 0x0000096C
_0806F544:
	.4byte 0x000009DA
_0806F548:
	.4byte gUnknown_02002000
_0806F54C:
	.4byte 0x00000AA6
_0806F550:
	.4byte gUnknown_0814CE0C
_0806F554:
	.4byte 0x00000B8A
_0806F558:
	.4byte 0x000009AD
_0806F55C:
	.4byte 0x000009DC
_0806F560:
	.4byte 0x00000A22
_0806F564:
	.4byte 0x00000CF4
_0806F568:
	ldr r7, _0806F5F0  @ =0x00000B36
	add r0, r5, r7
	ldrh r1, [r0]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r1, r0
	beq _0806F57C
	strh r1, [r3]
	bl sub_0806F1E8
_0806F57C:
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
_0806F582:
	ldr r3, _0806F5F4  @ =gRam
	ldr r0, _0806F5F8  @ =0x000009AD
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0806F5FC  @ =0x00000A11
	add r4, r3, r1
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0806F5B2
	mov r7, #161
	lsl r7, r7, #4
	add r2, r3, r7
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	ldr r2, _0806F600  @ =0x00000B1E
	add r0, r3, r2
	strh r1, [r0]
_0806F5B2:
	ldrb r1, [r4]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806F5C8
	ldr r7, _0806F604  @ =0x00000AB2
	add r0, r3, r7
	ldrh r1, [r0]
	mov r2, #2
	eor r1, r1, r2
	strh r1, [r0]
_0806F5C8:
	ldr r1, _0806F5F4  @ =gRam
	ldr r2, _0806F5FC  @ =0x00000A11
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0806F608  @ =0x000009E1
	add r0, r1, r3
	strb r2, [r0]
	ldr r7, _0806F60C  @ =0x000009E4
	add r0, r1, r7
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	bne _0806F610
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #4
	b _0806F618
	.byte 0x00
	.byte 0x00
_0806F5F0:
	.4byte 0x00000B36
_0806F5F4:
	.4byte gRam
_0806F5F8:
	.4byte 0x000009AD
_0806F5FC:
	.4byte 0x00000A11
_0806F600:
	.4byte 0x00000B1E
_0806F604:
	.4byte 0x00000AB2
_0806F608:
	.4byte 0x000009E1
_0806F60C:
	.4byte 0x000009E4
_0806F610:
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	mov r0, #8
_0806F618:
	strh r0, [r1]
	ldr r7, _0806F648  @ =0x00000AF9
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806F654
	ldr r1, _0806F64C  @ =gUnknown_0814CDDC
	ldr r3, _0806F650  @ =0x000009E2
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r1, r2, r7
	mov r3, #0
	ldrsh r1, [r1, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _0806F65C
	add r7, r7, #129
	add r1, r2, r7
	b _0806F658
	.byte 0x00
	.byte 0x00
_0806F648:
	.4byte 0x00000AF9
_0806F64C:
	.4byte gUnknown_0814CDDC
_0806F650:
	.4byte 0x000009E2
_0806F654:
	ldr r0, _0806F664  @ =0x000009E1
	add r1, r2, r0
_0806F658:
	mov r0, #2
	strb r0, [r1]
_0806F65C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806F664:
	.4byte 0x000009E1
	THUMB_FUNC_END sub_0806F428

