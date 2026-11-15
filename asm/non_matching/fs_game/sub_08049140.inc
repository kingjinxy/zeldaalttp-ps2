	THUMB_FUNC_START sub_08049140
sub_08049140: @ 0x08049140
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _080492A8  @ =0x0000FFFE
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	ldr r1, _080492AC  @ =gUnknown_0813F5FC
	str r1, [r0, #72]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _080491BE
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #207
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_080491BE:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #255
	bne _08049228
	ldr r0, [r7]
	mov r1, #50
	ldrsh r4, [r0, r1]
	ldr r0, [r7]
	mov r2, #54
	ldrsh r5, [r0, r2]
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	mov r2, #236
	lsl r2, r2, #1
	add r0, r1, r2
	add r1, r0, #0
	lsl r0, r1, #16
	asr r6, r0, #16
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	mov r2, #244
	lsl r2, r2, #1
	add r0, r1, r2
	add r1, r0, #0
	lsl r0, r1, #16
	asr r3, r0, #16
	add r0, r4, #0
	add r1, r5, #0
	add r2, r6, #0
	bl 0x08003F54
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_08049228:
	ldr r0, [r7]
	ldr r1, [r0, #12]
	cmp r1, #0
	bne _08049248
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, _080492B0  @ =gUnknown_0813F5A4
	mov r3, #3
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	str r2, [r0, #12]
_08049248:
	ldr r0, [r7]
	bl sub_080496DC
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #15
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08049298
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	mov r2, #1
	eor r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_08049298:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080492A8:
	.4byte 0x0000FFFE
_080492AC:
	.4byte gUnknown_0813F5FC
_080492B0:
	.4byte gUnknown_0813F5A4
	THUMB_FUNC_END sub_08049140

