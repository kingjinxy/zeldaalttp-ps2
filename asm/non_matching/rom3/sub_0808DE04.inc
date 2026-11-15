	THUMB_FUNC_START sub_0808DE04
sub_0808DE04: @ 0x0808DE04
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808DEE8  @ =gRam
	ldr r0, _0808DEEC  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r0, [r3]
	str r0, [sp]
	cmp r0, #16
	bne _0808DE2E
	ldr r2, _0808DEF0  @ =0x000009E8
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0808DEF4  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
_0808DE2E:
	ldr r0, [sp]
	cmp r0, #72
	bne _0808DEE0
	ldr r1, _0808DEF0  @ =0x000009E8
	add r2, r4, r1
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
	ldr r2, _0808DEF8  @ =0x000009C6
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r0, _0808DEFC  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _0808DF00  @ =0x00000622
	bl sub_08092568
	ldr r2, _0808DF04  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808DF08  @ =0x00003920
	bl sub_0808B8B8
	ldr r0, _0808DF0C  @ =0x00000624
	str r0, [sp, #4]
	ldr r0, _0808DF10  @ =0x00003924
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
	ldr r0, _0808DF14  @ =0x000006A2
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
	ldr r0, _0808DF18  @ =0x00000722
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
_0808DEE0:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808DEE8:
	.4byte gRam
_0808DEEC:
	.4byte 0x00000A02
_0808DEF0:
	.4byte 0x000009E8
_0808DEF4:
	.4byte 0x00000A3E
_0808DEF8:
	.4byte 0x000009C6
_0808DEFC:
	.4byte gUnknown_02002280
_0808DF00:
	.4byte 0x00000622
_0808DF04:
	.4byte 0x0000096C
_0808DF08:
	.4byte 0x00003920
_0808DF0C:
	.4byte 0x00000624
_0808DF10:
	.4byte 0x00003924
_0808DF14:
	.4byte 0x000006A2
_0808DF18:
	.4byte 0x00000722
	THUMB_FUNC_END sub_0808DE04

