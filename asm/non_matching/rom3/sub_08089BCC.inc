	THUMB_FUNC_START sub_08089BCC
sub_08089BCC: @ 0x08089BCC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _08089BF0  @ =gRam
	ldr r0, _08089BF4  @ =0x00000ACA
	add r2, r1, r0
	ldrh r3, [r2]
	mov r0, #3
	and r0, r0, r3
	add r6, r1, #0
	cmp r0, #0
	beq _08089BF8
	add r0, r3, #1
	strh r0, [r2]
	bl sub_0808B158
	b _08089E24
_08089BF0:
	.4byte gRam
_08089BF4:
	.4byte 0x00000ACA
_08089BF8:
	mov r0, #12
	and r0, r0, r3
	lsr r2, r0, #2
	ldr r1, _08089C5C  @ =0x00000BF6
	add r5, r6, r1
	ldr r3, _08089C60  @ =0x00000BFA
	add r7, r6, r3
	ldrh r3, [r5]
	ldrh r4, [r7]
	cmp r3, r4
	beq _08089C80
	ldr r1, _08089C64  @ =gUnknown_081535F4
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r1, r3, r0
	strh r1, [r5]
	ldr r3, _08089C68  @ =0x00000BF8
	add r2, r6, r3
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r2, _08089C6C  @ =gUnknown_08165BD4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r4, r1
	beq _08089C3A
	ldrh r0, [r7]
	ldrh r1, [r5]
	sub r0, r0, r1
	cmp r0, #8
	bne _08089C48
	ldr r2, _08089C70  @ =gUnknown_08165BAC
_08089C3A:
	ldr r7, _08089C74  @ =0x0000097C
	add r1, r6, r7
	mov r0, #5
	strh r0, [r1]
	add r0, r2, #0
	bl sub_08089824
_08089C48:
	ldr r1, _08089C78  @ =gRam
	ldr r0, _08089C7C  @ =0x00000ACA
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0808B158
	b _08089E24
	.byte 0x00
	.byte 0x00
_08089C5C:
	.4byte 0x00000BF6
_08089C60:
	.4byte 0x00000BFA
_08089C64:
	.4byte gUnknown_081535F4
_08089C68:
	.4byte 0x00000BF8
_08089C6C:
	.4byte gUnknown_08165BD4
_08089C70:
	.4byte gUnknown_08165BAC
_08089C74:
	.4byte 0x0000097C
_08089C78:
	.4byte gRam
_08089C7C:
	.4byte 0x00000ACA
_08089C80:
	ldr r1, _08089E30  @ =0x00000AE6
	add r2, r6, r1
	ldrh r0, [r2]
	cmp r0, #0
	beq _08089D2C
	mov r4, #0
	mov r3, #3
	mov r1, #8
	ldr r7, _08089E34  @ =0x00000C2A
	add r5, r6, r7
	mov r0, #0
	mov r12, r0
	mov r7, #10
	mov r9, r7
	mov r8, r2
_08089C9E:
	ldrh r2, [r5]
	ldr r7, _08089E38  @ =gUnknown_0200CBA0
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _08089E3C  @ =gUnknown_0200CBA2
	add r0, r2, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _08089E40  @ =gUnknown_0200CBA3
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _08089E44  @ =gUnknown_0200DBA0
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r9
	strb r7, [r0]
	ldr r7, _08089E48  @ =gUnknown_0200DBA2
	add r0, r2, r7
	mov r7, r9
	strb r7, [r0]
	ldr r7, _08089E4C  @ =gUnknown_0200DBA3
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _08089E50  @ =gUnknown_0200CBE0
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	ldr r7, _08089E54  @ =gUnknown_0200DBE0
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #61
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r5, r5, #2
	add r4, r4, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r4, r0
	bne _08089C9E
_08089D2C:
	ldr r1, _08089E58  @ =0x00000B46
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08089DF2
	mov r4, #0
	mov r8, r6
	mov r3, #3
	mov r1, #8
	ldr r2, _08089E5C  @ =0x00000C62
	add r5, r6, r2
	mov r7, #0
	mov r12, r7
	mov r0, #10
	mov r9, r0
_08089D4A:
	ldrh r2, [r5]
	ldr r7, _08089E60  @ =gUnknown_0200CC60
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _08089E64  @ =gUnknown_0200CC62
	add r0, r2, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _08089E68  @ =gUnknown_0200CC63
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _08089E6C  @ =gUnknown_0200DC60
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r9
	strb r7, [r0]
	ldr r7, _08089E70  @ =gUnknown_0200DC62
	add r0, r2, r7
	mov r7, r9
	strb r7, [r0]
	ldr r7, _08089E74  @ =gUnknown_0200DC63
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _08089E78  @ =gUnknown_0200CC20
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	ldr r7, _08089E44  @ =gUnknown_0200DBA0
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #61
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #61
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r1, [r0]
	add r5, r5, #2
	add r4, r4, #1
	ldr r0, _08089E58  @ =0x00000B46
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r4, r0
	bne _08089D4A
_08089DF2:
	ldr r1, _08089E7C  @ =0x000009AD
	add r0, r6, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08089E80  @ =0x000009E8
	add r0, r6, r2
	strh r1, [r0]
	ldr r3, _08089E84  @ =0x0000051A
	add r2, r6, r3
	mov r0, #63
	strh r0, [r2]
	ldr r7, _08089E88  @ =0x0000051C
	add r0, r6, r7
	strh r1, [r0]
	bl sub_0808B130
	ldr r0, _08089E8C  @ =0x00000504
	add r1, r6, r0
	mov r0, #123
	bl sub_0812A324
	ldr r2, _08089E90  @ =0x00001812
	add r1, r6, r2
	mov r0, #1
	strb r0, [r1]
_08089E24:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08089E30:
	.4byte 0x00000AE6
_08089E34:
	.4byte 0x00000C2A
_08089E38:
	.4byte gUnknown_0200CBA0
_08089E3C:
	.4byte gUnknown_0200CBA2
_08089E40:
	.4byte gUnknown_0200CBA3
_08089E44:
	.4byte gUnknown_0200DBA0
_08089E48:
	.4byte gUnknown_0200DBA2
_08089E4C:
	.4byte gUnknown_0200DBA3
_08089E50:
	.4byte gUnknown_0200CBE0
_08089E54:
	.4byte gUnknown_0200DBE0
_08089E58:
	.4byte 0x00000B46
_08089E5C:
	.4byte 0x00000C62
_08089E60:
	.4byte gUnknown_0200CC60
_08089E64:
	.4byte gUnknown_0200CC62
_08089E68:
	.4byte gUnknown_0200CC63
_08089E6C:
	.4byte gUnknown_0200DC60
_08089E70:
	.4byte gUnknown_0200DC62
_08089E74:
	.4byte gUnknown_0200DC63
_08089E78:
	.4byte gUnknown_0200CC20
_08089E7C:
	.4byte 0x000009AD
_08089E80:
	.4byte 0x000009E8
_08089E84:
	.4byte 0x0000051A
_08089E88:
	.4byte 0x0000051C
_08089E8C:
	.4byte 0x00000504
_08089E90:
	.4byte 0x00001812
	THUMB_FUNC_END sub_08089BCC

