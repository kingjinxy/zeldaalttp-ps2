	THUMB_FUNC_START sub_08042490
sub_08042490: @ 0x08042490
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _080424E8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #12]
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
	beq _080424EC
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
	beq _080424EC
	b _08042578
_080424E8:
	.4byte gUnknown_03006A30
_080424EC:
	ldr r0, [r7, #12]
	ldrb r1, [r0, #20]
	cmp r1, #2
	beq _08042518
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r2, _08042514  @ =gUnknown_03006A30
	add r1, r0, r2
	add r0, r1, #0
	bl 0x080012A0
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08042576
	.byte 0x00
	.byte 0x00
_08042514:
	.4byte gUnknown_03006A30
_08042518:
	ldr r0, _0804253C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08042540
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #113
	ldrb r0, [r1]
	cmp r0, #0
	bne _08042540
	b _08042576
_0804253C:
	.4byte gUnknown_03006A30
_08042540:
	ldr r0, [r7]
	bl sub_08042A90
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
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #16]
_08042576:
	b _08042594
_08042578:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r2, _0804259C  @ =gUnknown_03006A30
	add r1, r0, r2
	add r0, r1, #0
	bl 0x080012A0
	ldr r0, [r7]
	bl DeleteThisEntity
_08042594:
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
_0804259C:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08042490

