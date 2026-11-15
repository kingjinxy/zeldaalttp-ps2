	THUMB_FUNC_START sub_0802A4EC
sub_0802A4EC: @ 0x0802A4EC
	push {r4-r6,lr}
	add r5, r0, #0
	bl sub_08000580
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl 0x08000A40
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #1
	and r0, r0, r4
	cmp r0, #0
	beq _0802A55A
	ldr r2, _0802A52C  @ =gUnknown_03006A30
	ldr r1, _0802A530  @ =gUnknown_0813D49E
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #63
	strb r0, [r1]
	ldrh r1, [r2, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802A534
	sub r0, r3, #1
	b _0802A556
_0802A52C:
	.4byte gUnknown_03006A30
_0802A530:
	.4byte gUnknown_0813D49E
_0802A534:
	ldr r0, [r2, #40]
	ldr r0, [r0, #108]
	cmp r0, #0
	beq _0802A55A
	ldr r1, [r0, #88]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _0802A55A
	ldr r0, _0802A588  @ =gUnknown_08137B10
	ldrb r1, [r1, #10]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	and r0, r0, r4
	cmp r0, #0
	bne _0802A55A
	add r0, r3, #1
_0802A556:
	lsl r0, r0, #24
	lsr r3, r0, #24
_0802A55A:
	mov r0, #2
	and r0, r0, r4
	cmp r0, #0
	beq _0802A5BE
	ldr r2, _0802A58C  @ =gUnknown_03006A30
	ldr r1, _0802A590  @ =gUnknown_0813D49E
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #207
	strb r0, [r1]
	add r0, r2, #0
	add r0, r0, #198
	ldrh r1, [r0]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802A594
	sub r0, r3, #1
	b _0802A5BA
_0802A588:
	.4byte gUnknown_08137B10
_0802A58C:
	.4byte gUnknown_03006A30
_0802A590:
	.4byte gUnknown_0813D49E
_0802A594:
	add r0, r2, #0
	add r0, r0, #184
	ldr r0, [r0]
	ldr r0, [r0, #108]
	cmp r0, #0
	beq _0802A5BE
	ldr r1, [r0, #88]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _0802A5BE
	ldr r0, _0802A5F0  @ =gUnknown_08137B10
	ldrb r1, [r1, #10]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	and r0, r0, r4
	cmp r0, #0
	bne _0802A5BE
	add r0, r3, #1
_0802A5BA:
	lsl r0, r0, #24
	lsr r3, r0, #24
_0802A5BE:
	mov r0, #4
	and r0, r0, r4
	cmp r0, #0
	beq _0802A62C
	ldr r2, _0802A5F4  @ =gUnknown_03006A30
	ldr r1, _0802A5F8  @ =gUnknown_0813D49E
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r6, _0802A5FC  @ =0x0000015F
	add r1, r2, r6
	strb r0, [r1]
	mov r1, #171
	lsl r1, r1, #1
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802A600
	sub r0, r3, #1
	b _0802A628
	.byte 0x00
	.byte 0x00
_0802A5F0:
	.4byte gUnknown_08137B10
_0802A5F4:
	.4byte gUnknown_03006A30
_0802A5F8:
	.4byte gUnknown_0813D49E
_0802A5FC:
	.4byte 0x0000015F
_0802A600:
	mov r6, #164
	lsl r6, r6, #1
	add r0, r2, r6
	ldr r0, [r0]
	ldr r0, [r0, #108]
	cmp r0, #0
	beq _0802A62C
	ldr r1, [r0, #88]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _0802A62C
	ldr r0, _0802A65C  @ =gUnknown_08137B10
	ldrb r1, [r1, #10]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	and r0, r0, r4
	cmp r0, #0
	bne _0802A62C
	add r0, r3, #1
_0802A628:
	lsl r0, r0, #24
	lsr r3, r0, #24
_0802A62C:
	mov r0, #8
	and r0, r0, r4
	cmp r0, #0
	beq _0802A698
	ldr r2, _0802A660  @ =gUnknown_03006A30
	ldr r1, _0802A664  @ =gUnknown_0813D49E
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r5, _0802A668  @ =0x000001EF
	add r1, r2, r5
	strb r0, [r1]
	mov r6, #243
	lsl r6, r6, #1
	add r0, r2, r6
	ldrh r1, [r0]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802A66C
	sub r0, r3, #1
	b _0802A694
_0802A65C:
	.4byte gUnknown_08137B10
_0802A660:
	.4byte gUnknown_03006A30
_0802A664:
	.4byte gUnknown_0813D49E
_0802A668:
	.4byte 0x000001EF
_0802A66C:
	mov r1, #236
	lsl r1, r1, #1
	add r0, r2, r1
	ldr r0, [r0]
	ldr r0, [r0, #108]
	cmp r0, #0
	beq _0802A698
	ldr r1, [r0, #88]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _0802A698
	ldr r0, _0802A6A0  @ =gUnknown_08137B10
	ldrb r1, [r1, #10]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	and r0, r0, r4
	cmp r0, #0
	bne _0802A698
	add r0, r3, #1
_0802A694:
	lsl r0, r0, #24
	lsr r3, r0, #24
_0802A698:
	add r0, r3, #0
	pop {r4-r6}
	pop {r1}
	bx r1
_0802A6A0:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802A4EC

