	THUMB_FUNC_START sub_0801EE68
sub_0801EE68: @ 0x0801EE68
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r6, r0, #0
	ldrb r0, [r6, #20]
	cmp r0, #0
	beq _0801EE88
	add r0, r6, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r9, r0
	cmp r1, #6
	bne _0801EE8C
_0801EE88:
	mov r0, #0
	b _0801F090
_0801EE8C:
	bl sub_0800099C
	ldr r1, _0801EF5C  @ =gUnknown_03006C80
	ldrb r1, [r1]
	bl __umodsi3
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r7, #0
	mov r0, #0
	mov r8, r0
	mov r4, sp
	mov r3, sp
	mov r2, sp
	mov r1, sp
	mov r0, #255
	strb r0, [r1, #3]
	mov r0, #1
	neg r0, r0
	strb r0, [r2, #2]
	strb r0, [r3, #1]
	strb r0, [r4]
_0801EEB8:
	lsl r0, r5, #3
	add r0, r0, r5
	lsl r0, r0, #4
	ldr r1, _0801EF60  @ =gUnknown_03006A30
	add r4, r0, r1
	ldrb r0, [r4, #15]
	mov r1, #211
	neg r1, r1
	and r0, r0, r1
	cmp r0, #0
	beq _0801EF36
	ldr r3, [r4, #40]
	ldrh r0, [r3, #50]
	ldrh r1, [r6, #50]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #24
	bls _0801EEF0
	ldrh r0, [r3, #54]
	ldrh r1, [r6, #54]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #24
	bhi _0801EF36
_0801EEF0:
	add r0, r6, #0
	add r0, r0, #80
	add r1, r3, #0
	add r1, r1, #80
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	lsr r0, r0, #14
	cmp r0, #0
	beq _0801EF36
	add r0, r6, #0
	add r1, r3, #0
	bl sub_0803CECC
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, [r4, #40]
	add r1, r1, #42
	ldrb r2, [r1]
	mov r1, #4
	lsr r0, r0, #26
	eor r1, r1, r2
	cmp r0, r1
	bne _0801EF36
	mov r0, sp
	add r0, r0, r8
	strb r3, [r0]
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
_0801EF36:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _0801EF5C  @ =gUnknown_03006C80
	ldrb r1, [r0]
	cmp r5, r1
	bcc _0801EF46
	mov r5, #0
_0801EF46:
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, r1
	bcc _0801EEB8
	mov r1, r8
	cmp r1, #0
	bne _0801EF58
	b _0801F086
_0801EF58:
	mov r5, #0
	b _0801EFB0
_0801EF5C:
	.4byte gUnknown_03006C80
_0801EF60:
	.4byte gUnknown_03006A30
_0801EF64:
	add r1, r5, #1
	lsl r0, r1, #24
	lsr r7, r0, #24
	mov r12, r1
	cmp r7, r8
	bcs _0801EFAA
	mov r0, sp
	add r1, r0, r5
	mov r4, #255
	mov r5, #16
	mov r10, r5
_0801EF7A:
	ldrb r3, [r1]
	mov r0, sp
	add r2, r0, r7
	mov r0, r10
	eor r0, r0, r3
	ldrb r5, [r2]
	cmp r0, r5
	bne _0801EFA0
	add r0, r3, #0
	orr r0, r0, r4
	strb r0, [r1]
	ldrb r0, [r2]
	orr r0, r0, r4
	strb r0, [r2]
	mov r0, r8
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
_0801EFA0:
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, r8
	bcc _0801EF7A
_0801EFAA:
	mov r1, r12
	lsl r0, r1, #24
	lsr r5, r0, #24
_0801EFB0:
	mov r0, r8
	sub r0, r0, #1
	cmp r5, r0
	blt _0801EF64
	mov r5, r8
	cmp r5, #0
	beq _0801F08E
	add r0, r6, #0
	add r0, r0, #114
	ldrb r1, [r0]
	add r3, r0, #0
	add r2, r6, #0
	add r2, r2, #113
	cmp r1, #255
	beq _0801F062
	mov r5, #0
	ldr r7, _0801F034  @ =gUnknown_0813AF08
_0801EFD2:
	mov r0, sp
	add r4, r0, r5
	ldrb r0, [r3]
	ldrb r1, [r4]
	cmp r0, r1
	bne _0801F058
	ldrb r0, [r2]
	add r1, r0, #1
	strb r1, [r2]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #30
	bls _0801F038
	mov r0, #7
	strb r0, [r6, #20]
	mov r0, #90
	strb r0, [r6, #23]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r6, #16]
	mov r0, #6
	mov r5, r9
	strb r0, [r5]
	add r0, r6, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r6, #0
	bl sub_08003870
	mov r0, #32
	bl sub_08012468
	add r1, r0, #0
	cmp r1, #0
	beq _0801F054
	mov r0, #1
	strb r0, [r1, #10]
	ldrb r0, [r4]
	add r2, r1, #0
	add r2, r2, #43
	strb r0, [r2]
	add r0, r6, #0
	bl sub_0803D3D0
	b _0801F054
	.byte 0x00
	.byte 0x00
_0801F034:
	.4byte gUnknown_0813AF08
_0801F038:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801F054
	mov r0, #6
	and r1, r1, r0
	lsr r0, r1, #1
	add r0, r0, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r6, #50]
	add r0, r0, r1
	strh r0, [r6, #50]
_0801F054:
	mov r0, #1
	b _0801F090
_0801F058:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #3
	bls _0801EFD2
_0801F062:
	mov r0, #0
	strb r0, [r2]
	mov r5, #0
	mov r0, sp
	b _0801F076
_0801F06C:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r0, r1, r5
_0801F076:
	ldrb r0, [r0]
	cmp r0, #255
	beq _0801F06C
	mov r1, sp
	add r0, r1, r5
	ldrb r0, [r0]
	strb r0, [r3]
	b _0801F08E
_0801F086:
	add r1, r6, #0
	add r1, r1, #114
	mov r0, #255
	strb r0, [r1]
_0801F08E:
	mov r0, r8
_0801F090:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801EE68

