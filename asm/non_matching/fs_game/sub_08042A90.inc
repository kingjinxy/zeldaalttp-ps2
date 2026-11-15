	THUMB_FUNC_START sub_08042A90
sub_08042A90: @ 0x08042A90
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, [r7]
	ldrb r2, [r1, #26]
	lsr r1, r2, #4
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08042B1C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #8]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #12]
	ldr r0, [r7, #8]
	mov r1, #0
	str r1, [r0, #108]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #100
	ldr r1, [r7, #12]
	ldrb r2, [r1, #8]
	add r1, r2, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	beq _08042ADE
	b _08042C90
_08042ADE:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #102
	ldr r1, [r7, #12]
	ldrb r2, [r1, #9]
	add r1, r2, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	beq _08042AF6
	b _08042C90
_08042AF6:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	ldr r0, [r7]
	cmp r1, r0
	beq _08042B20
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #12]
	ldr r0, [r7, #12]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
	b _08042B38
_08042B1C:
	.4byte gUnknown_03006A30
_08042B20:
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
_08042B38:
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7]
	ldr r1, [r7, #12]
	ldr r2, [r1, #72]
	str r2, [r0, #72]
	ldr r0, [r7]
	ldr r1, _08042C88  @ =gUnknown_0813EBDC
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #12]
	ldr r0, [r7]
	ldr r1, _08042C8C  @ =gUnknown_0813EBE8
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #16]
	ldr r0, [r7]
	ldr r1, [r7, #12]
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #58]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #68
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #70
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #23
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	add r2, r1, #0
	add r1, r1, #60
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl sub_080005F0
	b _08042CAC
	.byte 0x00
	.byte 0x00
_08042C88:
	.4byte gUnknown_0813EBDC
_08042C8C:
	.4byte gUnknown_0813EBE8
_08042C90:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r2, _08042CB4  @ =gUnknown_03006A30
	add r1, r0, r2
	add r0, r1, #0
	bl 0x080012A0
	ldr r0, [r7]
	bl DeleteThisEntity
_08042CAC:
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
_08042CB4:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08042A90

