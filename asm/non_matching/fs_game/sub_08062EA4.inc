	THUMB_FUNC_START sub_08062EA4
sub_08062EA4: @ 0x08062EA4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08062ED0
	b _08062FCA
_08062ED0:
	ldr r0, _08062F18  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #1
	bne _08062F50
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062F20
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062F1C  @ =gUnknown_08142024
	add r0, r1, r0
	str r0, [r7, #4]
	b _08062F48
	.byte 0x00
	.byte 0x00
_08062F18:
	.4byte gUnknown_03006C80
_08062F1C:
	.4byte gUnknown_08142024
_08062F20:
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062F4C  @ =gUnknown_08141F64
	add r0, r1, r0
	str r0, [r7, #4]
_08062F48:
	b _08062FBC
	.byte 0x00
	.byte 0x00
_08062F4C:
	.4byte gUnknown_08141F64
_08062F50:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062F94
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062F90  @ =gUnknown_08141F04
	add r0, r1, r0
	str r0, [r7, #4]
	b _08062FBC
	.byte 0x00
	.byte 0x00
_08062F90:
	.4byte gUnknown_08141F04
_08062F94:
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062FD4  @ =gUnknown_08141E44
	add r0, r1, r0
	str r0, [r7, #4]
_08062FBC:
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_08062FD8
	ldr r0, [r7]
	bl DeleteThisEntity
_08062FCA:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08062FD4:
	.4byte gUnknown_08141E44
	THUMB_FUNC_END sub_08062EA4

