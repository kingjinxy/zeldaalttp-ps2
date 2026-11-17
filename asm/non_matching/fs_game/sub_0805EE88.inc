	THUMB_FUNC_START sub_0805EE88
sub_0805EE88: @ 0x0805EE88
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805EEFC  @ =gUnknown_08141778
	ldr r1, _0805EF00  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
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
	lsl r1, r2, #2
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #4]
	ldr r0, _0805EEFC  @ =gUnknown_08141778
	ldr r1, _0805EF00  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	add r1, r2, #4
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #8]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _0805EEF0
	b _0805F19C
_0805EEF0:
	cmp r0, #1
	bgt _0805EF04
	cmp r0, #0
	beq _0805EF16
	bl _0805F928
_0805EEFC:
	.4byte gUnknown_08141778
_0805EF00:
	.4byte gUnknown_03006C80
_0805EF04:
	cmp r0, #2
	bne _0805EF0A
	b _0805F420
_0805EF0A:
	cmp r0, #3
	bne _0805EF12
	bl _0805F6A4
_0805EF12:
	bl _0805F928
_0805EF16:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	ldr r1, _0805F198  @ =0x0000FFFF
	cmp r0, r1
	bne _0805F054
	b _0805F192
_0805F054:
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r1, r1, #14
	str r1, [r7, #4]
	ldr r0, [r7, #8]
	add r1, r0, #0
	add r1, r1, #8
	str r1, [r7, #8]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_0805F192:
	bl _0805F928
	.byte 0x00
	.byte 0x00
_0805F198:
	.4byte 0x0000FFFF
_0805F19C:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	ldr r1, _0805F41C  @ =0x0000FFFF
	cmp r0, r1
	bne _0805F2DA
	b _0805F418
_0805F2DA:
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r1, r1, #14
	str r1, [r7, #4]
	ldr r0, [r7, #8]
	add r1, r0, #0
	add r1, r1, #8
	str r1, [r7, #8]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_0805F418:
	b _0805F928
	.byte 0x00
	.byte 0x00
_0805F41C:
	.4byte 0x0000FFFF
_0805F420:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	ldr r1, _0805F6A0  @ =0x0000FFFF
	cmp r0, r1
	bne _0805F55E
	b _0805F69C
_0805F55E:
	ldr r0, [r7, #4]
	add r1, r0, #0
	sub r1, r1, #34
	str r1, [r7, #4]
	ldr r0, [r7, #8]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #8]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_0805F69C:
	b _0805F928
	.byte 0x00
	.byte 0x00
_0805F6A0:
	.4byte 0x0000FFFF
_0805F6A4:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	ldr r1, _0805F924  @ =0x0000FFFF
	cmp r0, r1
	bne _0805F7E2
	b _0805F920
_0805F7E2:
	ldr r0, [r7, #4]
	add r1, r0, #0
	sub r1, r1, #34
	str r1, [r7, #4]
	ldr r0, [r7, #8]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #8]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #63
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #0
	add r1, r1, #8
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #8]
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
_0805F920:
	b _0805F928
	.byte 0x00
	.byte 0x00
_0805F924:
	.4byte 0x0000FFFF
_0805F928:
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805EE88

	.byte 0x00
	.byte 0x00
