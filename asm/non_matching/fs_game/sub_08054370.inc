	THUMB_FUNC_START sub_08054370
sub_08054370: @ 0x08054370
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _080543A0  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	mov r1, #20
	and r0, r0, r1
	cmp r0, #20
	bne _080543A4
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080544FA
	.byte 0x00
	.byte 0x00
_080543A0:
	.4byte gUnknown_0201F000
_080543A4:
	ldr r0, [r7, #4]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0805448A
	ldr r0, [r7, #4]
	mov r1, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080543E8
	ldr r0, _080543E4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _080543E4  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #16
	orr r2, r2, r1
	str r2, [r0]
	b _08054460
	.byte 0x00
	.byte 0x00
_080543E4:
	.4byte gUnknown_0201F000
_080543E8:
	ldr r0, [r7, #4]
	mov r1, #32
	and r0, r0, r1
	cmp r0, #0
	bne _08054420
	ldr r0, _0805441C  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805441C  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #32
	orr r2, r2, r1
	str r2, [r0]
	b _08054460
_0805441C:
	.4byte gUnknown_0201F000
_08054420:
	ldr r0, [r7, #4]
	mov r1, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08054460
	ldr r0, _0805445C  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805445C  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #64
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080544FA
	.byte 0x00
	.byte 0x00
_0805445C:
	.4byte gUnknown_0201F000
_08054460:
	ldr r0, _08054504  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08054504  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r3, #8
	add r1, r2, #0
	bic r1, r1, r3
	str r1, [r0]
_0805448A:
	ldr r0, [r7, #4]
	mov r1, #3
	and r0, r0, r1
	cmp r0, #3
	bne _080544FA
	ldr r0, _08054504  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08054504  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r3, #4
	add r1, r2, #0
	bic r1, r1, r3
	str r1, [r0]
	ldr r0, [r7]
	bl sub_08054A38
	ldr r0, [r7]
	bl sub_0805485C
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_080544FA:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08054504:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08054370

