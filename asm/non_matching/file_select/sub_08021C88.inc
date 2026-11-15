	THUMB_FUNC_START sub_08021C88
sub_08021C88: @ 0x08021C88
	push {r4,r5,lr}
	add r5, r0, #0
	mov r1, #128
	lsl r1, r1, #6
	bl 0x08003594
	add r0, r5, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08021CA4
	b _08021E4A
_08021CA4:
	mov r0, #127
	and r0, r0, r1
	sub r0, r0, #4
	add r4, r5, #0
	add r4, r4, #69
	cmp r0, #20
	bhi _08021D56
	lsl r0, r0, #2
	ldr r1, _08021CBC  @ =0x08021CC0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08021CBC:
	.4byte 0x08021CC0
	.4byte _08021D38
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D38
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D38
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D14
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D56
	.4byte _08021D38
_08021D14:
	ldr r2, _08021DC4  @ =gUnknown_03006A30
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #6
	strb r1, [r0, #12]
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
_08021D38:
	add r4, r5, #0
	add r4, r4, #69
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	add r1, r5, #0
	add r1, r1, #61
	mov r0, #208
	strb r0, [r1]
	add r0, r5, #0
	bl sub_08022D88
	mov r0, #45
	bl play_sound
_08021D56:
	add r1, r5, #0
	add r1, r1, #65
	mov r0, #0
	strb r0, [r1]
	ldrb r0, [r4]
	cmp r0, #0
	bne _08021E4A
	ldrb r0, [r5, #10]
	add r0, r0, #1
	strb r0, [r5, #10]
	add r0, r5, #0
	bl sub_0802C0EC
	ldr r0, _08021DC8  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	add r0, r0, #1
	ldrb r1, [r5, #10]
	cmp r0, r1
	bne _08021D80
	mov r0, #4
	strb r0, [r5, #10]
_08021D80:
	add r0, r5, #0
	bl sub_08022AEC
	ldrb r0, [r5, #10]
	cmp r0, #3
	bhi _08021E0C
	cmp r0, #2
	bne _08021DD0
	mov r0, #19
	bl sub_0802C39C
	add r0, r5, #0
	mov r1, #8
	bl sub_0802C070
	mov r0, #21
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r5, #30]
	ldr r0, _08021DCC  @ =gUnknown_0813BCB4
	str r0, [r5, #72]
	ldrb r1, [r5, #28]
	mov r0, #49
	neg r0, r0
	and r0, r0, r1
	mov r1, #32
	orr r0, r0, r1
	b _08021DFE
_08021DC4:
	.4byte gUnknown_03006A30
_08021DC8:
	.4byte gUnknown_03006C80
_08021DCC:
	.4byte gUnknown_0813BCB4
_08021DD0:
	mov r0, #21
	bl sub_0802C39C
	add r0, r5, #0
	mov r1, #9
	bl sub_0802C070
	mov r0, #22
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r5, #30]
	ldr r0, _08021E08  @ =gUnknown_0813BCBC
	str r0, [r5, #72]
	ldrb r1, [r5, #28]
	mov r0, #49
	neg r0, r0
	and r0, r0, r1
_08021DFE:
	strb r0, [r5, #28]
	add r0, r5, #0
	bl sub_08022A7C
	b _08021E70
_08021E08:
	.4byte gUnknown_0813BCBC
_08021E0C:
	mov r0, #22
	bl sub_0802C39C
	add r0, r5, #0
	mov r1, #7
	bl sub_0802C070
	mov r0, #23
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, #15
	add r1, r0, #0
	and r1, r1, r2
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r5, #30]
	strb r2, [r5, #20]
	add r2, r5, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r5, #28]
	b _08021E70
_08021E4A:
	add r1, r5, #0
	add r1, r1, #112
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08021E70
	ldrb r0, [r5, #30]
	lsr r0, r0, #4
	sub r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r5, #30]
	add r0, r5, #0
	bl sub_08022A7C
_08021E70:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021C88

	.byte 0x00
	.byte 0x00
