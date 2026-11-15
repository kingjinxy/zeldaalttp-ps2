	THUMB_FUNC_START sub_0808DF1C
sub_0808DF1C: @ 0x0808DF1C
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808DFFC  @ =gRam
	ldr r0, _0808E000  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #72
	bne _0808DFF2
	ldr r0, _0808E004  @ =0x000009E8
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	mov r0, #41
	mov r1, #0
	bl sub_0812A324
	mov r0, #88
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0808E008  @ =0x000005A2
	bl sub_08092568
	ldr r2, _0808E00C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E010  @ =0x00003950
	bl sub_0808B8B8
	ldr r0, _0808E014  @ =0x000005A4
	str r0, [sp, #4]
	ldr r0, _0808E018  @ =0x00003954
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E01C  @ =0x00000622
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E020  @ =0x000006A2
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E024  @ =0x00000722
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808DFF2:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808DFFC:
	.4byte gRam
_0808E000:
	.4byte 0x00000A02
_0808E004:
	.4byte 0x000009E8
_0808E008:
	.4byte 0x000005A2
_0808E00C:
	.4byte 0x0000096C
_0808E010:
	.4byte 0x00003950
_0808E014:
	.4byte 0x000005A4
_0808E018:
	.4byte 0x00003954
_0808E01C:
	.4byte 0x00000622
_0808E020:
	.4byte 0x000006A2
_0808E024:
	.4byte 0x00000722
	THUMB_FUNC_END sub_0808DF1C

