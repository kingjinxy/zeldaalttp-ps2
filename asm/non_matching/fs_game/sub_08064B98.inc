	THUMB_FUNC_START sub_08064B98
sub_08064B98: @ 0x08064B98
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _08064BF8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08064BC8
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
_08064BC8:
	ldr r0, [r7]
	ldr r2, _08064C28  @ =gUnknown_03006A30
	ldr r1, [r2, #40]
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
	ldr r2, _08064C28  @ =gUnknown_03006A30
	ldr r1, [r2, #40]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08064BF8:
	ldr r0, _08064C2C  @ =gUnknown_0202A4F8
	ldr r1, [r0]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08064C20
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
_08064C20:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064C28:
	.4byte gUnknown_03006A30
_08064C2C:
	.4byte gUnknown_0202A4F8
	THUMB_FUNC_END sub_08064B98

