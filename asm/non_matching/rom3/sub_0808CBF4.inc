	THUMB_FUNC_START sub_0808CBF4
sub_0808CBF4: @ 0x0808CBF4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r6, _0808CCCC  @ =gRam
	ldr r0, _0808CCD0  @ =gUnknown_03002B90
	ldrh r0, [r0]
	str r0, [sp]
	mov r8, r0
	ldr r1, _0808CCD4  @ =gUnknown_03002B94
	ldrh r1, [r1]
	mov r10, r1
	mov r9, r10
	ldr r2, _0808CCD8  @ =0x0000096C
	add r7, r6, r2
	mov r3, #0
	ldrsh r0, [r7, r3]
	lsl r0, r0, #1
	ldr r1, _0808CCDC  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0808CCE0  @ =0x000016B6
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r7, r3]
	lsl r0, r0, #1
	ldr r1, _0808CCE4  @ =gUnknown_02018002
	add r0, r0, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r7, r3]
	lsl r0, r0, #1
	ldr r1, _0808CCE8  @ =gUnknown_02018040
	add r0, r0, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r7, r3]
	lsl r0, r0, #1
	ldr r1, _0808CCEC  @ =gUnknown_02018042
	add r0, r0, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r6, r2
	strh r1, [r0]
	mov r5, #0
	ldr r4, _0808CCF0  @ =0x00000898
	add r0, r4, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CC96
	mov r5, #1
	add r4, r4, #4
	add r0, r4, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CC96
	mov r5, #2
	add r4, r4, #4
	add r0, r4, #0
	bl sub_0808C148
	cmp r0, #1
	beq _0808CC96
	mov r5, #3
	add r4, r4, #4
	add r0, r4, #0
	bl sub_0808C148
	cmp r0, #1
	bne _0808CD08
_0808CC96:
	add r0, r5, #0
	bl sub_0808CB08
	ldr r2, _0808CCCC  @ =gRam
	ldr r3, _0808CCF4  @ =gUnknown_0815DF14
	ldr r1, _0808CCF8  @ =gUnknown_08155B4E
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _0808CCFC  @ =0x000001FF
	and r0, r0, r1
	add r0, r0, r3
	ldrb r1, [r0]
	ldr r3, _0808CD00  @ =0x00000978
	add r0, r2, r3
	strh r1, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r3, r8
	strh r3, [r0]
	ldr r0, _0808CD04  @ =0x00000964
	add r2, r2, r0
	mov r1, r9
	strh r1, [r2]
	mov r0, #1
	b _0808CD94
_0808CCCC:
	.4byte gRam
_0808CCD0:
	.4byte gUnknown_03002B90
_0808CCD4:
	.4byte gUnknown_03002B94
_0808CCD8:
	.4byte 0x0000096C
_0808CCDC:
	.4byte gUnknown_02018000
_0808CCE0:
	.4byte 0x000016B6
_0808CCE4:
	.4byte gUnknown_02018002
_0808CCE8:
	.4byte gUnknown_02018040
_0808CCEC:
	.4byte gUnknown_02018042
_0808CCF0:
	.4byte 0x00000898
_0808CCF4:
	.4byte gUnknown_0815DF14
_0808CCF8:
	.4byte gUnknown_08155B4E
_0808CCFC:
	.4byte 0x000001FF
_0808CD00:
	.4byte 0x00000978
_0808CD04:
	.4byte 0x00000964
_0808CD08:
	ldr r5, _0808CD5C  @ =0x0000371C
	mov r0, #216
	bl sub_0808C148
	cmp r0, #0
	beq _0808CD7C
	ldr r2, _0808CD60  @ =0x0000097C
	add r4, r6, r2
	strh r5, [r4]
	mov r3, #0
	ldrsh r0, [r7, r3]
	bl sub_080925A4
	bl sub_0813386C
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_0808C1B4
	ldr r2, _0808CD64  @ =gUnknown_0815DF14
	ldr r0, _0808CD68  @ =gUnknown_08155B4E
	mov r3, #216
	lsl r3, r3, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r0, _0808CD6C  @ =0x000001FF
	and r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r2, _0808CD70  @ =0x00000978
	add r0, r6, r2
	strh r1, [r0]
	mov r3, sp
	ldrh r0, [r3]
	ldr r3, _0808CD74  @ =gUnknown_03002B90
	strh r0, [r3]
	mov r2, r10
	ldr r1, _0808CD78  @ =gUnknown_03002B94
	strh r2, [r1]
	mov r0, #1
	b _0808CD94
	.byte 0x00
	.byte 0x00
_0808CD5C:
	.4byte 0x0000371C
_0808CD60:
	.4byte 0x0000097C
_0808CD64:
	.4byte gUnknown_0815DF14
_0808CD68:
	.4byte gUnknown_08155B4E
_0808CD6C:
	.4byte 0x000001FF
_0808CD70:
	.4byte 0x00000978
_0808CD74:
	.4byte gUnknown_03002B90
_0808CD78:
	.4byte gUnknown_03002B94
_0808CD7C:
	mov r3, r8
	lsl r0, r3, #16
	asr r0, r0, #16
	mov r2, r9
	lsl r1, r2, #16
	asr r1, r1, #16
	bl sub_080691D8
	ldr r3, _0808CDA4  @ =0x00000978
	add r1, r6, r3
	strh r0, [r1]
	mov r0, #0
_0808CD94:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_0808CDA4:
	.4byte 0x00000978
	THUMB_FUNC_END sub_0808CBF4

