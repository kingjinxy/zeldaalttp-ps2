	THUMB_FUNC_START sub_0808D9AC
sub_0808D9AC: @ 0x0808D9AC
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808DA1C  @ =gRam
	ldr r0, _0808DA20  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808DA12
	ldr r0, _0808DA24  @ =0x000009E8
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
	ldr r0, _0808DA28  @ =0x0000026A
	bl sub_08092568
	ldr r2, _0808DA2C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808DA30  @ =0x000038B4
	bl sub_0808B8B8
	ldr r0, _0808DA34  @ =0x000038B8
	str r0, [sp]
	ldr r0, _0808DA38  @ =0x000002EA
	str r0, [sp, #4]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808DA3C  @ =0x0000036A
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808DA12:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808DA1C:
	.4byte gRam
_0808DA20:
	.4byte 0x00000A02
_0808DA24:
	.4byte 0x000009E8
_0808DA28:
	.4byte 0x0000026A
_0808DA2C:
	.4byte 0x0000096C
_0808DA30:
	.4byte 0x000038B4
_0808DA34:
	.4byte 0x000038B8
_0808DA38:
	.4byte 0x000002EA
_0808DA3C:
	.4byte 0x0000036A
	THUMB_FUNC_END sub_0808D9AC

