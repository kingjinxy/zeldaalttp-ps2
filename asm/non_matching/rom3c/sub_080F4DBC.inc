	THUMB_FUNC_START sub_080F4DBC
sub_080F4DBC: @ 0x080F4DBC
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080F4EC4  @ =gRam
	ldr r1, _080F4EC8  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #3
	beq _080F4DD2
	b _080F4EFC
_080F4DD2:
	ldr r2, _080F4ECC  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F4DDE
	b _080F4FF8
_080F4DDE:
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	beq _080F4DEE
	b _080F4FF8
_080F4DEE:
	ldr r3, _080F4ED0  @ =0x00000ED2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, #16
	mov r7, #182
	lsl r7, r7, #5
	add r1, r4, r7
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bcs _080F4E0A
	b _080F4FF8
_080F4E0A:
	ldr r1, _080F4ED4  @ =0x00000547
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F4E22
	ldr r0, _080F4ED8  @ =gSword
	ldrb r0, [r0]
	cmp r0, #2
	bne _080F4E22
	b _080F4FF8
_080F4E22:
	mov r3, #1
	mov r2, #1
	mov r6, #0
	ldr r0, _080F4EDC  @ =gUnknown_03003E70
	strb r2, [r0]
	ldr r7, _080F4EE0  @ =0x00000A4E
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #17
	bne _080F4E46
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080F4E46
	mov r6, #1
	mov r3, #0
_080F4E46:
	cmp r3, #0
	beq _080F4E5E
	ldr r0, _080F4EC4  @ =gRam
	ldr r1, _080F4EE4  @ =0x00000546
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080F4E5E
	mov r2, #0
_080F4E5E:
	cmp r2, #0
	bne _080F4E64
	b _080F4FF8
_080F4E64:
	cmp r6, #0
	beq _080F4EB0
	ldr r4, _080F4EC4  @ =gRam
	ldr r2, _080F4EE8  @ =0x00001789
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080F4EEC  @ =0x0000180C
	add r1, r4, r3
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080F4ED8  @ =gSword
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F4EA4
	cmp r1, #1
	bls _080F4EA4
	ldr r7, _080F4EF0  @ =0x00000F52
	add r1, r4, r7
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_0809E5BC
	ldr r1, _080F4EF4  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
_080F4EA4:
	cmp r6, #0
	beq _080F4EB0
	mov r0, #14
	mov r1, #1
	bl sub_080BEA28
_080F4EB0:
	ldr r0, _080F4EF8  @ =gUnknown_081797C8
	lsl r1, r6, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	b _080F4FF8
	.byte 0x00
	.byte 0x00
_080F4EC4:
	.4byte gRam
_080F4EC8:
	.4byte 0x000009C6
_080F4ECC:
	.4byte 0x000016D5
_080F4ED0:
	.4byte 0x00000ED2
_080F4ED4:
	.4byte 0x00000547
_080F4ED8:
	.4byte gSword
_080F4EDC:
	.4byte gUnknown_03003E70
_080F4EE0:
	.4byte 0x00000A4E
_080F4EE4:
	.4byte 0x00000546
_080F4EE8:
	.4byte 0x00001789
_080F4EEC:
	.4byte 0x0000180C
_080F4EF0:
	.4byte 0x00000F52
_080F4EF4:
	.4byte 0x00000FC2
_080F4EF8:
	.4byte gUnknown_081797C8
_080F4EFC:
	ldr r2, _080F5000  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F4FF8
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _080F4FF8
	ldr r3, _080F5004  @ =0x00001624
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r7, _080F5008  @ =0x00001625
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r2, [r0]
	add r3, r3, #157
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	lsl r2, r2, #16
	add r1, r1, #16
	lsl r1, r1, #16
	cmp r1, r2
	bcc _080F4FF8
	ldr r7, _080F500C  @ =0x00000547
	add r0, r4, r7
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F4F5A
	ldr r0, _080F5010  @ =gSword
	ldrb r0, [r0]
	cmp r0, #2
	beq _080F4FF8
_080F4F5A:
	mov r3, #1
	mov r2, #1
	mov r6, #0
	ldr r0, _080F5014  @ =gUnknown_03003E70
	strb r2, [r0]
	ldr r7, _080F5018  @ =0x00000A4E
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #17
	bne _080F4F7E
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080F4F7E
	mov r6, #1
	mov r3, #0
_080F4F7E:
	cmp r3, #0
	beq _080F4F96
	ldr r0, _080F501C  @ =gRam
	ldr r1, _080F5020  @ =0x00000546
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080F4F96
	mov r2, #0
_080F4F96:
	cmp r2, #0
	beq _080F4FF8
	cmp r6, #0
	beq _080F4FE6
	ldr r4, _080F501C  @ =gRam
	ldr r2, _080F5024  @ =0x00001789
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080F5028  @ =0x0000180C
	add r1, r4, r3
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080F5010  @ =gSword
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F4FDA
	cmp r1, #1
	bls _080F4FDA
	ldr r7, _080F502C  @ =0x00000F52
	add r1, r4, r7
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_0809E57C
	ldr r1, _080F5030  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
_080F4FDA:
	cmp r6, #0
	beq _080F4FE6
	mov r0, #14
	mov r1, #1
	bl sub_080BEA28
_080F4FE6:
	ldr r1, _080F5034  @ =gUnknown_081797CC
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, sp
	add r2, r2, #1
	add r0, r5, #0
	bl sub_080C9564
_080F4FF8:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F5000:
	.4byte 0x000016D5
_080F5004:
	.4byte 0x00001624
_080F5008:
	.4byte 0x00001625
_080F500C:
	.4byte 0x00000547
_080F5010:
	.4byte gSword
_080F5014:
	.4byte gUnknown_03003E70
_080F5018:
	.4byte 0x00000A4E
_080F501C:
	.4byte gRam
_080F5020:
	.4byte 0x00000546
_080F5024:
	.4byte 0x00001789
_080F5028:
	.4byte 0x0000180C
_080F502C:
	.4byte 0x00000F52
_080F5030:
	.4byte 0x00000FC2
_080F5034:
	.4byte gUnknown_081797CC
	THUMB_FUNC_END sub_080F4DBC

