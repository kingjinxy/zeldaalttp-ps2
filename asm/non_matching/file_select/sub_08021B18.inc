	THUMB_FUNC_START sub_08021B18
sub_08021B18: @ 0x08021B18
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_08022D50
	add r0, r4, #0
	add r0, r0, #112
	ldrh r5, [r0]
	cmp r5, #0
	beq _08021B58
	sub r0, r0, #77
	ldrb r0, [r0]
	cmp r0, #0
	beq _08021B46
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	b _08021B4C
_08021B46:
	add r0, r4, #0
	bl GetNextFrame
_08021B4C:
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	b _08021B86
_08021B58:
	mov r0, #12
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08022CA4
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08021B74
	add r0, r4, #0
	bl sub_08022A7C
	b _08021B86
_08021B74:
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _08021B80
	add r0, r4, #0
	add r0, r0, #121
	strb r5, [r0]
_08021B80:
	add r0, r4, #0
	bl sub_08022BB8
_08021B86:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021B18

