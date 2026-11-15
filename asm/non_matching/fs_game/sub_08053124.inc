	THUMB_FUNC_START sub_08053124
sub_08053124: @ 0x08053124
	push {r4,r7,lr}
	sub sp, sp, #40
	mov r7, sp
	str r0, [r7]
	ldr r0, _08053198  @ =gUnknown_03005E10
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08053174
	ldr r0, _0805319C  @ =gUnknown_03006C80
	ldr r1, _0805319C  @ =gUnknown_03006C80
	add r2, r1, #0
	add r1, r1, #109
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldrb r1, [r1]
	eor r1, r1, r2
	add r2, r0, #0
	add r0, r0, #109
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08053174:
	ldr r1, _0805319C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #109
	ldrb r0, [r1]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080531A0
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _080533E4
_08053198:
	.4byte gUnknown_03005E10
_0805319C:
	.4byte gUnknown_03006C80
_080531A0:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7, #4]
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	add r2, r2, #8
	add r3, r1, #0
	add r1, r1, #96
	add r2, r1, r2
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	cmp r1, #255
	bne _080531D0
	b _080533D2
_080531D0:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08053248
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	mov r3, #14
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, _08053244  @ =gUnknown_081408F4
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, _08053244  @ =gUnknown_081408F4
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08053344
	.byte 0x00
	.byte 0x00
_08053244:
	.4byte gUnknown_081408F4
_08053248:
	add r1, r7, #0
	add r1, r1, #12
	ldrb r0, [r1]
	cmp r0, #2
	beq _0805329C
	cmp r0, #2
	bgt _0805325C
	cmp r0, #0
	beq _08053266
	b _08053344
_0805325C:
	cmp r0, #4
	beq _080532D4
	cmp r0, #6
	beq _0805330C
	b _08053344
_08053266:
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, _08053298  @ =gUnknown_03000450
	ldrh r1, [r1, #50]
	ldrh r2, [r2, #32]
	sub r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	b _08053344
_08053298:
	.4byte gUnknown_03000450
_0805329C:
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #234
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, _080532D0  @ =gUnknown_03000450
	ldrh r1, [r1, #54]
	ldrh r2, [r2, #34]
	sub r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08053344
	.byte 0x00
	.byte 0x00
_080532D0:
	.4byte gUnknown_03000450
_080532D4:
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, _08053308  @ =gUnknown_03000450
	ldrh r1, [r1, #50]
	ldrh r2, [r2, #32]
	sub r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #154
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	b _08053344
	.byte 0x00
	.byte 0x00
_08053308:
	.4byte gUnknown_03000450
_0805330C:
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, _08053340  @ =gUnknown_03000450
	ldrh r1, [r1, #54]
	ldrh r2, [r2, #34]
	sub r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08053344
	.byte 0x00
	.byte 0x00
_08053340:
	.4byte gUnknown_03000450
_08053344:
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #5
	bgt _08053362
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08053362:
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #154
	ble _08053380
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #154
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08053380:
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	cmp r1, #5
	bgt _0805339E
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_0805339E:
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	cmp r1, #234
	ble _080533BC
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #234
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_080533BC:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	b _080533DE
_080533D2:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_080533DE:
	ldr r0, [r7]
	bl GetNextFrame
_080533E4:
	add sp, sp, #40
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08053124

