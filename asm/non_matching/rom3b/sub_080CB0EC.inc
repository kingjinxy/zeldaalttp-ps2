	THUMB_FUNC_START sub_080CB0EC
sub_080CB0EC: @ 0x080CB0EC
	push {r4-r7,lr}
	ldr r2, _080CB154  @ =gRam
	mov r1, #176
	lsl r1, r1, #5
	add r0, r2, r1
	mov r5, #0
	strb r5, [r0]
	mov r3, #171
	lsl r3, r3, #4
	add r4, r2, r3
	ldrh r3, [r4]
	mov r0, #7
	and r0, r0, r3
	lsl r0, r0, #1
	ldr r6, _080CB158  @ =0x00001601
	add r1, r2, r6
	strb r0, [r1]
	ldr r1, _080CB15C  @ =0x00001602
	add r0, r2, r1
	strb r5, [r0]
	mov r0, #63
	and r0, r0, r3
	lsr r0, r0, #2
	mov r1, #14
	and r0, r0, r1
	ldr r3, _080CB160  @ =0x00001603
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080CB164  @ =gUnknown_081728AC
	ldrh r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	sub r6, r6, #5
	add r1, r2, r6
	strh r0, [r1]
	sub r3, r3, #5
	add r1, r2, r3
	strh r0, [r1]
	ldrh r0, [r4]
	add r6, r6, #98
	add r2, r2, r6
	ldrb r1, [r2]
	cmp r1, #2
	beq _080CB16C
	cmp r1, #2
	ble _080CB174
	cmp r1, #3
	bne _080CB174
	ldr r1, _080CB168  @ =gUnknown_082280B0
	b _080CB176
	.byte 0x00
	.byte 0x00
_080CB154:
	.4byte gRam
_080CB158:
	.4byte 0x00001601
_080CB15C:
	.4byte 0x00001602
_080CB160:
	.4byte 0x00001603
_080CB164:
	.4byte gUnknown_081728AC
_080CB168:
	.4byte gUnknown_082280B0
_080CB16C:
	ldr r1, _080CB170  @ =gUnknown_08227E70
	b _080CB176
_080CB170:
	.4byte gUnknown_08227E70
_080CB174:
	ldr r1, _080CB198  @ =gUnknown_08227D70
_080CB176:
	lsl r0, r0, #16
	asr r0, r0, #14
	add r0, r0, r1
	ldr r0, [r0]
	add r5, r0, #0
	ldrb r0, [r5]
	cmp r0, #255
	beq _080CB1D4
	ldr r7, _080CB19C  @ =gUnknown_0300387A
_080CB188:
	ldrb r6, [r5, #2]
	cmp r6, #250
	bne _080CB1A0
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	b _080CB1CC
	.byte 0x00
	.byte 0x00
_080CB198:
	.4byte gUnknown_08227D70
_080CB19C:
	.4byte gUnknown_0300387A
_080CB1A0:
	ldrb r3, [r5]
	lsl r3, r3, #20
	lsr r4, r3, #16
	ldrb r1, [r5, #1]
	mov r2, #15
	and r2, r2, r1
	mov r0, #240
	and r4, r4, r0
	orr r2, r2, r4
	lsr r3, r3, #24
	lsl r3, r3, #2
	lsr r1, r1, #4
	orr r1, r1, r3
	lsl r1, r1, #24
	lsr r1, r1, #16
	add r2, r2, r1
	lsl r2, r2, #16
	asr r2, r2, #16
	ldr r0, _080CB1DC  @ =gUnknown_02006B80
	add r2, r2, r0
	add r0, r6, #1
	strb r0, [r2]
_080CB1CC:
	add r5, r5, #3
	ldrb r0, [r5]
	cmp r0, #255
	bne _080CB188
_080CB1D4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CB1DC:
	.4byte gUnknown_02006B80
	THUMB_FUNC_END sub_080CB0EC

