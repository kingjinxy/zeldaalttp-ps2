	THUMB_FUNC_START sub_0801AEA0
sub_0801AEA0: @ 0x0801AEA0
	push {r4-r6,lr}
	add r4, r0, #0
	bl 0x08003828
	ldr r2, _0801AEF4  @ =gUnknown_03006A30
	ldr r0, _0801AEF8  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r2, [r0]
	mov r0, #50
	ldrsh r1, [r2, r0]
	add r0, r4, #0
	add r0, r0, #120
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	bhi _0801AEFC
	mov r0, #54
	ldrsh r1, [r2, r0]
	add r0, r4, #0
	add r0, r0, #122
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #126
	ldrh r0, [r0]
	cmp r1, r0
	bhi _0801AEFC
	str r2, [r4, #88]
	add r1, r4, #0
	add r1, r1, #113
	mov r0, #255
	b _0801AF02
_0801AEF4:
	.4byte gUnknown_03006A30
_0801AEF8:
	.4byte gUnknown_03000E20
_0801AEFC:
	add r1, r4, #0
	add r1, r1, #113
	mov r0, #0
_0801AF02:
	strb r0, [r1]
	add r6, r1, #0
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #1
	beq _0801AF36
	cmp r0, #2
	beq _0801AF78
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801AFF4
	add r5, r4, #0
	add r5, r5, #42
	ldrb r1, [r5]
	add r0, r4, #0
	bl 0x08003870
	add r2, r6, #0
	ldrb r0, [r2]
	cmp r0, #255
	bne _0801AFC2
	b _0801AFAE
_0801AF36:
	mov r0, #0
	strb r0, [r2]
	mov r0, #140
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r5, [r0]
	add r0, r5, #4
	mov r1, #24
	and r0, r0, r1
	asr r0, r0, #3
	add r2, r4, #0
	add r2, r2, #42
	ldrb r3, [r2]
	cmp r0, r3
	beq _0801AF70
	lsl r0, r3, #3
	sub r0, r5, r0
	mov r1, #31
	and r0, r0, r1
	cmp r0, #16
	ble _0801AF68
	sub r0, r3, #1
	b _0801AF6A
_0801AF68:
	add r0, r3, #1
_0801AF6A:
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
_0801AF70:
	mov r0, #93
	bl 0x08003DFC
	b _0801AFF4
_0801AF78:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801AF92
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_0801AF92:
	mov r1, #224
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0801AFF4
	add r0, r4, #0
	bl sub_0801B024
	mov r0, #94
	bl 0x08003DFC
	b _0801AFF4
_0801AFAE:
	mov r1, #0
	mov r0, #4
	strb r0, [r4, #20]
	strb r1, [r2]
	add r0, r4, #0
	add r0, r0, #112
	strb r1, [r0]
	add r0, r0, #2
	strb r1, [r0]
	b _0801AFF4
_0801AFC2:
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	asr r0, r0, #3
	ldrb r5, [r5]
	cmp r0, r5
	bne _0801AFF4
	mov r0, #6
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #14
	bl 0x08003870
	add r0, r4, #0
	bl sub_0801B5A8
_0801AFF4:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801AEA0

	.byte 0x00
	.byte 0x00
