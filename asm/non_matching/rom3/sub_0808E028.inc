	THUMB_FUNC_START sub_0808E028
sub_0808E028: @ 0x0808E028
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808E12C  @ =gRam
	ldr r0, _0808E130  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #80
	bne _0808E122
	ldr r0, _0808E134  @ =0x000009E8
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
	ldr r0, _0808E138  @ =0x00000522
	bl sub_08092568
	ldr r2, _0808E13C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E140  @ =0x00003990
	bl sub_0808B8B8
	ldr r0, _0808E144  @ =0x00000524
	str r0, [sp, #4]
	ldr r0, _0808E148  @ =0x00003994
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E14C  @ =0x000005A2
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E150  @ =0x00000622
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E154  @ =0x000006A2
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808BAC0
	mov r0, sp
	add r1, r4, #0
	bl sub_0808BAC0
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E158  @ =0x00000722
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
_0808E122:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E12C:
	.4byte gRam
_0808E130:
	.4byte 0x00000A02
_0808E134:
	.4byte 0x000009E8
_0808E138:
	.4byte 0x00000522
_0808E13C:
	.4byte 0x0000096C
_0808E140:
	.4byte 0x00003990
_0808E144:
	.4byte 0x00000524
_0808E148:
	.4byte 0x00003994
_0808E14C:
	.4byte 0x000005A2
_0808E150:
	.4byte 0x00000622
_0808E154:
	.4byte 0x000006A2
_0808E158:
	.4byte 0x00000722
	THUMB_FUNC_END sub_0808E028

