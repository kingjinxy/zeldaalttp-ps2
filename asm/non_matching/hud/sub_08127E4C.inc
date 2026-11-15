	THUMB_FUNC_START sub_08127E4C
sub_08127E4C: @ 0x08127E4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r0, _08127EBC  @ =gRam
	ldr r1, _08127EC0  @ =0x00001AF0
	add r5, r0, r1
	ldrh r1, [r5]
	cmp r1, #0
	beq _08127E9C
	ldr r1, _08127EC4  @ =gUnknown_08180BCC
	add r2, r0, #0
	ldr r3, _08127EC8  @ =0x00001AF2
	add r0, r2, r3
	ldrh r0, [r0]       @ gRam.unk1AF2
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]       @ gUnknown_08180BCC[gRam.unk1AF2 / 2]
	ldr r4, _08127EBC  @ =gRam
	ldr r6, _08127ECC  @ =0x00001AF6
	add r1, r4, r6
	mov r4, #0
	mov r3, #0
	strh r2, [r1]
	ldr r1, _08127ED0  @ =gUnknown_08180BD2
	add r0, r0, r1
	ldrh r0, [r0]       @ gUnknown_08180BD2[gRam.unk1AF2 / 2]
	lsl r0, r0, #1
	ldr r2, _08127EBC  @ =gRam
	sub r6, r6, #2
	add r1, r2, r6
	strh r0, [r1]
	strh r3, [r5]
	ldrh r0, [r1]
	ldr r1, _08127ED4  @ =gUnknown_02010470
	add r0, r0, r1
	strb r4, [r0]
_08127E9C:
	ldr r2, _08127EBC  @ =gRam
	ldr r4, _08127ED8  @ =0x00001AD2
	add r3, r2, r4
	ldrh r1, [r3]
	ldr r5, _08127EDC  @ =gTextPointer
	add r0, r1, r5
	ldrb r2, [r0]
	cmp r2, #31
	bne _08127EE0
	add r0, r1, #1
	strh r0, [r3]
	ldrh r0, [r3]
	add r0, r0, r5
	ldrb r2, [r0]
	b _08127F00
	.byte 0x00
	.byte 0x00
_08127EBC:
	.4byte gRam
_08127EC0:
	.4byte 0x00001AF0
_08127EC4:
	.4byte gUnknown_08180BCC
_08127EC8:
	.4byte 0x00001AF2
_08127ECC:
	.4byte 0x00001AF6
_08127ED0:
	.4byte gUnknown_08180BD2
_08127ED4:
	.4byte gUnknown_02010470
_08127ED8:
	.4byte 0x00001AD2
_08127EDC:
	.4byte gTextPointer
_08127EE0:
	cmp r2, #127
	bhi _08127F00
	ldr r6, _08127F7C  @ =gRam
	ldr r1, _08127F80  @ =0x0000098E
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08127F00
	mov r3, #128
	lsl r3, r3, #1
	add r0, r2, r3
	lsl r0, r0, #16
	lsr r2, r0, #16
_08127F00:
	ldr r0, _08127F84  @ =gUnknown_08195D98
	add r0, r2, r0
	ldrb r5, [r0]
	mov r0, #248
	lsl r0, r0, #1
	and r0, r0, r2
	lsl r0, r0, #1      @ (r2 & (248 * 2)) * 2
	mov r1, #15
	and r2, r2, r1
	add r0, r0, r2
	lsl r0, r0, #5
	ldr r1, _08127F88  @ =gUnknown_083B5758
	add r6, r0, r1
	ldr r4, _08127F7C  @ =gRam
	ldr r0, _08127F8C  @ =0x00001AF4
	add r1, r4, r0
	ldrh r0, [r1]
	ldr r3, _08127F90  @ =gUnknown_02010471
	add r2, r0, r3
	ldr r4, _08127F94  @ =gUnknown_02010470
	add r0, r0, r4
	ldrb r0, [r0]
	add r0, r5, r0
	strb r0, [r2]
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _08127F98  @ =gUnknown_0201046F
	add r0, r0, r1
	ldrb r1, [r0]
	mov r3, #7
	and r3, r3, r1
	cmp r3, #0
	bne _08127FA4
	lsl r1, r1, #2
	ldr r2, _08127F7C  @ =gRam
	ldr r3, _08127F9C  @ =0x00001AF6
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r4, _08127FA0  @ =gUnknown_02003080
	add r0, r0, r4
	add r1, r1, r0
	mov r7, #0
	mov r3, #160
	lsl r3, r3, #2
	mov r2, #240
	lsl r2, r2, #1
_08127F64:
	ldr r0, [r6]
	str r0, [r1]
	cmp r7, #7
	bne _08127F70
	add r1, r1, r3
	add r6, r6, r2
_08127F70:
	add r7, r7, #1
	add r6, r6, #4
	add r1, r1, #4
	cmp r7, #15
	ble _08127F64
	b _08128092
_08127F7C:
	.4byte gRam
_08127F80:
	.4byte 0x0000098E
_08127F84:
	.4byte gUnknown_08195D98
_08127F88:
	.4byte gUnknown_083B5758
_08127F8C:
	.4byte 0x00001AF4
_08127F90:
	.4byte gUnknown_02010471
_08127F94:
	.4byte gUnknown_02010470
_08127F98:
	.4byte gUnknown_0201046F
_08127F9C:
	.4byte 0x00001AF6
_08127FA0:
	.4byte gUnknown_02003080
_08127FA4:
	mov r0, #248
	and r1, r1, r0
	lsl r1, r1, #2      @ (gUnknown_0201046F[gRam.unk1AF4] & 248) << 2
	ldr r2, _08128008  @ =gRam
	ldr r4, _0812800C  @ =0x00001AF6
	add r0, r2, r4
	ldrh r0, [r0]       @gRam.unk1AF6
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _08128010  @ =gUnknown_02003080
	add r0, r0, r2
	add r4, r1, r0
	lsl r2, r3, #2
	add r0, r2, #0
	mov r12, r0
	add r0, r3, r5
	add r1, r2, #0
	cmp r0, #8
	bgt _0812801C
	mov r7, #0
	ldr r0, _08128014  @ =gUnknown_08180BF8
	add r0, r1, r0
	ldr r3, [r0]
	ldr r0, _08128018  @ =gUnknown_08180BD8
	add r0, r1, r0
	ldr r2, [r0]
	mov r1, #160
	lsl r1, r1, #2
	mov r8, r1
	mov r5, #240
	lsl r5, r5, #1
	mov r9, r5
_08127FE4:
	ldr r1, [r4]
	and r1, r1, r3
	ldr r0, [r6]
	mov r5, r12
	lsl r0, r0, r5
	and r0, r0, r2
	orr r1, r1, r0
	str r1, [r4]
	cmp r7, #7
	bne _08127FFC
	add r4, r4, r8
	add r6, r6, r9
_08127FFC:
	add r7, r7, #1
	add r6, r6, #4
	add r4, r4, #4
	cmp r7, #15
	ble _08127FE4
	b _08128092
_08128008:
	.4byte gRam
_0812800C:
	.4byte 0x00001AF6
_08128010:
	.4byte gUnknown_02003080
_08128014:
	.4byte gUnknown_08180BF8
_08128018:
	.4byte gUnknown_08180BD8
_0812801C:
	add r5, r4, #0
	add r5, r5, #32
	sub r0, r0, #8
	lsl r0, r0, #24
	mov r7, #0
	ldr r3, _081280B0  @ =gUnknown_08180BF8
	add r1, r2, r3
	ldr r1, [r1]        @ gUnknown_08180BF8[r3]
	str r1, [sp]
	ldr r1, _081280B4  @ =gUnknown_08180BD8
	add r2, r2, r1
	ldr r2, [r2]        @ gUnknown_08180BD8[r3]
	str r2, [sp, #4]
	lsr r0, r0, #22
	add r1, r0, r1
	ldr r1, [r1]
	mov r10, r1         @ gUnknown_08180BD8[(u8)(r3 + r5 - 8)] ?
	add r0, r0, r3
	ldr r0, [r0]
	mov r9, r0          @ gUnknown_08180BF8[(u8)(r3 + r5 - 8)]
	mov r0, #32
	mov r1, r12
	sub r1, r0, r1      @ 32 - (r3 << 2)
	mov r8, r1
_0812804C:
	ldr r2, [r6]
	ldr r1, [r4]
	ldr r3, [sp]
	and r1, r1, r3      @ *r4 & gUnknown_08180BF8[r3]
	add r0, r2, #0
	mov r3, r12
	lsl r0, r0, r3      @ *r6 << r12
	ldr r3, [sp, #4]     @ gUnknown_08180BD8[r3]
	and r0, r0, r3
	orr r1, r1, r0
	str r1, [r4]
	ldr r0, [r5]
	mov r1, r10
	and r0, r0, r1      @ *r5 & gUnknown_08180BD8[(u8)(r3 + r5 - 8)]
	mov r3, r8
	lsr r2, r2, r3      @ *r6 << (32 - (r3 << 2))
	mov r1, r9
	and r2, r2, r1
	orr r0, r0, r2
	str r0, [r5]
	cmp r7, #7
	bne _08128086
	mov r2, #160
	lsl r2, r2, #2
	add r4, r4, r2
	add r5, r5, r2
	mov r3, #240
	lsl r3, r3, #1
	add r6, r6, r3
_08128086:
	add r7, r7, #1
	add r6, r6, #4
	add r4, r4, #4
	add r5, r5, #4
	cmp r7, #15
	ble _0812804C
_08128092:
	ldr r4, _081280B8  @ =gRam
	ldr r5, _081280BC  @ =0x00001AD2
	add r1, r4, r5
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081280B0:
	.4byte gUnknown_08180BF8
_081280B4:
	.4byte gUnknown_08180BD8
_081280B8:
	.4byte gRam
_081280BC:
	.4byte 0x00001AD2
	THUMB_FUNC_END sub_08127E4C

