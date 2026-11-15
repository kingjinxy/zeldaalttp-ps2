	THUMB_FUNC_START sub_0808EAB4
sub_0808EAB4: @ 0x0808EAB4
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808EB18  @ =gRam
	ldr r0, _0808EB1C  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808EB0E
	ldr r0, _0808EB20  @ =0x000009E8
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
	ldr r0, _0808EB24  @ =0x0000055E
	bl sub_08092568
	ldr r2, _0808EB28  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808EB2C  @ =0x00003A68
	bl sub_0808B8B8
	mov r0, #172
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808EB30  @ =0x00003A6C
	str r0, [sp]
	add r1, sp, #4
	mov r0, sp
	bl sub_0808B948
_0808EB0E:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808EB18:
	.4byte gRam
_0808EB1C:
	.4byte 0x00000A02
_0808EB20:
	.4byte 0x000009E8
_0808EB24:
	.4byte 0x0000055E
_0808EB28:
	.4byte 0x0000096C
_0808EB2C:
	.4byte 0x00003A68
_0808EB30:
	.4byte 0x00003A6C
	THUMB_FUNC_END sub_0808EAB4

