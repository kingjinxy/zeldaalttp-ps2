	THUMB_FUNC_START sub_0808CDA8
sub_0808CDA8: @ 0x0808CDA8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	bl sub_0808CA1C
	ldr r4, _0808CEBC  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	mov r8, r0
	ldr r2, _0808CEC0  @ =0x00000964
	add r0, r4, r2
	ldrh r0, [r0]
	mov r9, r0
	ldr r3, _0808CEC4  @ =0x0000096C
	add r2, r4, r3
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r3, _0808CEC8  @ =gUnknown_02018000
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r3, _0808CECC  @ =0x000016B6
	add r0, r4, r3
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r3, _0808CED0  @ =gUnknown_02018002
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r3, _0808CED4  @ =0x000016B8
	add r0, r4, r3
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r3, _0808CED8  @ =gUnknown_02018040
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r3, _0808CEDC  @ =0x000016BA
	add r0, r4, r3
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r2, _0808CEE0  @ =gUnknown_02018042
	add r0, r0, r2
	ldrh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strh r1, [r0]
	mov r7, #0
	ldr r6, _0808CEE4  @ =0x00000DB4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #1
	add r6, r6, #4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #2
	add r6, r6, #24
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #3
	add r6, r6, #4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #0
	ldr r6, _0808CEE8  @ =0x000008EC
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #1
	add r6, r6, #4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #2
	add r6, r6, #4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CE84
	mov r7, #3
	add r6, r6, #4
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	bne _0808CEFC
_0808CE84:
	add r0, r7, #0
	bl sub_0808CB08
	ldr r2, _0808CEBC  @ =gRam
	ldr r3, _0808CEEC  @ =gUnknown_0815DF14
	ldr r1, _0808CEF0  @ =gUnknown_08155B4E
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _0808CEF4  @ =0x000001FF
	and r0, r0, r1
	add r0, r0, r3
	ldrb r1, [r0]
	ldr r3, _0808CEF8  @ =0x00000978
	add r0, r2, r3
	strh r1, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r3, r8
	strh r3, [r0]
	ldr r0, _0808CEC0  @ =0x00000964
	add r2, r2, r0
	mov r1, r9
	strh r1, [r2]
	mov r0, #1
	b _0808CFD4
	.byte 0x00
	.byte 0x00
_0808CEBC:
	.4byte gRam
_0808CEC0:
	.4byte 0x00000964
_0808CEC4:
	.4byte 0x0000096C
_0808CEC8:
	.4byte gUnknown_02018000
_0808CECC:
	.4byte 0x000016B6
_0808CED0:
	.4byte gUnknown_02018002
_0808CED4:
	.4byte 0x000016B8
_0808CED8:
	.4byte gUnknown_02018040
_0808CEDC:
	.4byte 0x000016BA
_0808CEE0:
	.4byte gUnknown_02018042
_0808CEE4:
	.4byte 0x00000DB4
_0808CEE8:
	.4byte 0x000008EC
_0808CEEC:
	.4byte gUnknown_0815DF14
_0808CEF0:
	.4byte gUnknown_08155B4E
_0808CEF4:
	.4byte 0x000001FF
_0808CEF8:
	.4byte 0x00000978
_0808CEFC:
	ldr r7, _0808CF90  @ =0x0000371C
	mov r6, #216
	mov r0, #216
	bl sub_0808C148
	cmp r0, #1
	beq _0808CF40
	add r7, r7, #4
	ldr r6, _0808CF94  @ =0x00001CA8
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CF40
	add r7, r7, #8
	ldr r6, _0808CF98  @ =0x0000083C
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CF40
	add r6, r6, #168
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CF40
	sub r7, r7, #16
	ldr r6, _0808CF9C  @ =0x00000404
	add r0, r6, #0
	bl sub_0808C148
	cmp r0, #1
	bne _0808CFBC
_0808CF40:
	ldr r4, _0808CFA0  @ =gRam
	ldr r2, _0808CFA4  @ =0x0000097C
	add r5, r4, r2
	strh r7, [r5]
	ldr r3, _0808CFA8  @ =0x0000096C
	add r0, r4, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	bl sub_0813386C
	mov r2, #0
	ldrsh r0, [r5, r2]
	bl sub_0808C1B4
	ldr r2, _0808CFAC  @ =gUnknown_0815DF14
	ldr r1, _0808CFB0  @ =gUnknown_08155B4E
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _0808CFB4  @ =0x000001FF
	and r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r3, _0808CFB8  @ =0x00000978
	add r0, r4, r3
	strh r1, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	mov r2, r8
	strh r2, [r0]
	sub r3, r3, #20
	add r4, r4, r3
	mov r0, r9
	strh r0, [r4]
	mov r0, #1
	b _0808CFD4
	.byte 0x00
	.byte 0x00
_0808CF90:
	.4byte 0x0000371C
_0808CF94:
	.4byte 0x00001CA8
_0808CF98:
	.4byte 0x0000083C
_0808CF9C:
	.4byte 0x00000404
_0808CFA0:
	.4byte gRam
_0808CFA4:
	.4byte 0x0000097C
_0808CFA8:
	.4byte 0x0000096C
_0808CFAC:
	.4byte gUnknown_0815DF14
_0808CFB0:
	.4byte gUnknown_08155B4E
_0808CFB4:
	.4byte 0x000001FF
_0808CFB8:
	.4byte 0x00000978
_0808CFBC:
	mov r1, r8
	lsl r0, r1, #16
	asr r0, r0, #16
	mov r2, r9
	lsl r1, r2, #16
	asr r1, r1, #16
	bl sub_080691D8
	ldr r3, _0808CFE0  @ =0x00000978
	add r1, r4, r3
	strh r0, [r1]
	mov r0, #0
_0808CFD4:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
_0808CFE0:
	.4byte 0x00000978
	THUMB_FUNC_END sub_0808CDA8

