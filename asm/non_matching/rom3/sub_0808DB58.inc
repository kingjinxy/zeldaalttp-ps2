	THUMB_FUNC_START sub_0808DB58
sub_0808DB58: @ 0x0808DB58
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808DBC4  @ =gRam
	ldr r0, _0808DBC8  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bne _0808DBBC
	ldr r0, _0808DBCC  @ =0x000009E8
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	mov r0, #226
	lsl r0, r0, #3
	bl sub_08092568
	ldr r2, _0808DBD0  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808DBD4  @ =0x0000381C
	bl sub_0808B8B8
	ldr r0, _0808DBD8  @ =0x00000712
	str r0, [sp, #4]
	ldr r0, _0808DBDC  @ =0x00003820
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
	mov r0, #56
	mov r1, #0
	bl sub_0812A324
_0808DBBC:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808DBC4:
	.4byte gRam
_0808DBC8:
	.4byte 0x00000A02
_0808DBCC:
	.4byte 0x000009E8
_0808DBD0:
	.4byte 0x0000096C
_0808DBD4:
	.4byte 0x0000381C
_0808DBD8:
	.4byte 0x00000712
_0808DBDC:
	.4byte 0x00003820
	THUMB_FUNC_END sub_0808DB58

