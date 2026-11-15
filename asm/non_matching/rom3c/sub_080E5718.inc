	THUMB_FUNC_START sub_080E5718
sub_080E5718: @ 0x080E5718
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E5754  @ =gRam
	ldr r0, _080E5758  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _080E575C  @ =gUnknown_081774BC
	ldr r1, _080E5760  @ =0x00000996
	add r6, r5, r1
	ldrb r0, [r6]
	lsr r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080E5764  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E576C
	ldr r7, _080E5768  @ =0x00001142
	add r1, r5, r7
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080E57E4
_080E5754:
	.4byte gRam
_080E5758:
	.4byte 0x00000F92
_080E575C:
	.4byte gUnknown_081774BC
_080E5760:
	.4byte 0x00000996
_080E5764:
	.4byte 0x00000FC2
_080E5768:
	.4byte 0x00001142
_080E576C:
	ldrb r0, [r6]
	add r1, r4, #0
	eor r1, r1, r0
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	bne _080E57E4
	mov r1, #15
	and r1, r1, r4
	add r1, r1, #24
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r1, _080E57EC  @ =0x00000F22
	add r0, r5, r1
	add r3, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r3]
	ldr r7, _080E57F0  @ =0x00000F12
	add r0, r5, r7
	add r2, r4, r0
	ldr r0, _080E57F4  @ =0x00000961
	add r6, r5, r0
	ldrb r4, [r6]
	strb r4, [r2]
	ldr r7, _080E57F8  @ =0x0000097C
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #40
	cmp r0, #79
	bgt _080E57C6
	add r7, r7, #1
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #40
	cmp r0, #79
	ble _080E57E4
_080E57C6:
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	add r0, r4, r0
	strb r0, [r2]
	mov r0, #0
	ldrsb r0, [r6, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	ldrb r1, [r3]
	add r0, r0, r1
	strb r0, [r3]
_080E57E4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E57EC:
	.4byte 0x00000F22
_080E57F0:
	.4byte 0x00000F12
_080E57F4:
	.4byte 0x00000961
_080E57F8:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080E5718

