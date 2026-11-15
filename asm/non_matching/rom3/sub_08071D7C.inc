	THUMB_FUNC_START sub_08071D7C
sub_08071D7C: @ 0x08071D7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_08071CCC
	ldr r2, _08071E2C  @ =gRam
	ldr r3, _08071E30  @ =0x000001FF
	add r1, r3, #0
	and r0, r0, r1
	mov r7, #150
	lsl r7, r7, #4
	add r1, r2, r7
	strh r0, [r1]
	mov r3, #3
	add r4, r2, #0
	mov r0, #0
	ldrsh r6, [r1, r0]
	ldr r1, _08071E34  @ =0x000009C6
	add r1, r1, r4
	mov r10, r1
	ldr r7, _08071E38  @ =gUnknown_0814CEBC
	mov r9, r7
	ldr r0, _08071E3C  @ =gUnknown_0814CEC4
	mov r12, r0
	ldr r1, _08071E40  @ =gUnknown_0814CED4
	mov r8, r1
	ldr r7, _08071E44  @ =0x00001727
	add r5, r4, r7
_08071DB8:
	lsl r2, r3, #1
	mov r1, r9
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r6, r0
	bne _08071E68
	mov r7, r12
	add r1, r2, r7
	mov r7, r10
	ldrh r0, [r7]
	ldrh r1, [r1]
	cmp r0, r1
	bne _08071E68
	mov r1, r8
	add r0, r2, r1
	ldrh r0, [r0]
	ldr r3, _08071E48  @ =gRoomIds
	strh r0, [r3]
	ldr r7, _08071E4C  @ =gUnknown_0814CECC
	add r2, r2, r7
	ldrh r0, [r2]
	strb r0, [r5]
	ldrb r1, [r5]
	ldr r3, _08071E50  @ =0x00000AB6
	add r0, r4, r3
	strh r1, [r0]
	ldrb r1, [r5]
	ldr r7, _08071E54  @ =0x00000ABC
	add r0, r4, r7
	strh r1, [r0]
	ldrh r1, [r2]
	mov r3, #3
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08071E0E
	mov r2, #1
_08071E02:
	asr r1, r1, #1
	sub r3, r3, #1
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08071E02
_08071E0E:
	ldr r1, _08071E58  @ =0x00000ABE
	add r0, r4, r1
	strh r3, [r0]
	ldr r7, _08071E5C  @ =0x00000C0E
	add r0, r4, r7
	strh r3, [r0]
	mov r0, #23
	ldr r1, _08071E60  @ =gUnknown_03002BDD
	strb r0, [r1]
	ldr r3, _08071E64  @ =0x000009AC
	add r1, r4, r3
	mov r0, #11
	strb r0, [r1]
	b _08071E6E
	.byte 0x00
	.byte 0x00
_08071E2C:
	.4byte gRam
_08071E30:
	.4byte 0x000001FF
_08071E34:
	.4byte 0x000009C6
_08071E38:
	.4byte gUnknown_0814CEBC
_08071E3C:
	.4byte gUnknown_0814CEC4
_08071E40:
	.4byte gUnknown_0814CED4
_08071E44:
	.4byte 0x00001727
_08071E48:
	.4byte gRoomIds
_08071E4C:
	.4byte gUnknown_0814CECC
_08071E50:
	.4byte 0x00000AB6
_08071E54:
	.4byte 0x00000ABC
_08071E58:
	.4byte 0x00000ABE
_08071E5C:
	.4byte 0x00000C0E
_08071E60:
	.4byte gUnknown_03002BDD
_08071E64:
	.4byte 0x000009AC
_08071E68:
	sub r3, r3, #1
	cmp r3, #0
	bge _08071DB8
_08071E6E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08071D7C

