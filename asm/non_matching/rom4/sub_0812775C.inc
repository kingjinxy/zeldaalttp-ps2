	THUMB_FUNC_START sub_0812775C
sub_0812775C: @ 0x0812775C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r7, r0, #0
	ldr r4, _081277E8  @ =gRam
	ldr r0, _081277EC  @ =0x00001AF8
	add r0, r0, r4
	mov r8, r0
	ldr r0, [r0]
	ldr r1, _081277F0  @ =0x00001AD6
	add r4, r4, r1
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #1
	bl sub_08129E0C
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r2, r8
	ldr r0, [r2]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #2
	bl sub_08129E0C
	add r6, r0, #0
	lsl r6, r6, #24
	lsr r6, r6, #24
	mov r1, r8
	ldr r0, [r1]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #3
	bl sub_08129E0C
	add r5, r0, #0
	mov r2, r8
	ldr r0, [r2]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #4
	bl sub_08129E0C
	lsl r5, r5, #24
	lsl r0, r0, #24
	lsr r0, r0, #8
	orr r0, r0, r5
	lsr r4, r0, #16
	mov r0, #0
	mov r8, r0
	cmp r6, #0
	bne _081277F8
	ldr r0, _081277F4  @ =gUnknown_08180A6C
	add r1, r4, #0
	sub r1, r1, #103
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r7, #0
	bl _call_via_r1
	cmp r4, #127
	beq _081277E0
	b _081278E2
_081277E0:
	mov r1, #1
	mov r8, r1
	b _081278E2
	.byte 0x00
	.byte 0x00
_081277E8:
	.4byte gRam
_081277EC:
	.4byte 0x00001AF8
_081277F0:
	.4byte 0x00001AD6
_081277F4:
	.4byte gUnknown_08180A6C
_081277F8:
	ldr r0, _08127808  @ =0x00000143
	cmp r4, r0
	bls _08127814
	ldr r1, _0812780C  @ =gUnknown_08180B1A
	ldr r2, _08127810  @ =0xFFFFFEBC
	add r0, r4, r2
	b _0812781A
	.byte 0x00
	.byte 0x00
_08127808:
	.4byte 0x00000143
_0812780C:
	.4byte gUnknown_08180B1A
_08127810:
	.4byte 0xFFFFFEBC
_08127814:
	ldr r1, _081278A4  @ =gUnknown_08180AD8
	add r0, r4, #0
	sub r0, r0, #68
_0812781A:
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r5, [r0]
	cmp r4, #68
	bne _08127844
	ldr r2, _081278A8  @ =gRam
	ldr r4, _081278AC  @ =0x00001AD2
	add r2, r2, r4
	ldrh r0, [r2]
	ldr r1, _081278B0  @ =gTextPointer
	add r0, r0, r1
	mov r1, #19
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r4, _081278B4  @ =gUnknown_02005481
	add r0, r0, r4
	mov r1, #0
	strb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
_08127844:
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r5
	cmp r0, #0
	beq _081278C4
	ldr r2, _081278A8  @ =gRam
	ldr r0, _081278AC  @ =0x00001AD2
	add r2, r2, r0
	ldrh r0, [r2]
	ldr r1, _081278B0  @ =gTextPointer
	add r0, r0, r1
	mov r3, #19
	strb r3, [r0]
	ldrh r0, [r2]
	ldr r4, _081278B4  @ =gUnknown_02005481
	add r0, r0, r4
	mov r1, #0
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r1, _081278B8  @ =gUnknown_02005482
	add r0, r0, r1
	mov r1, #31
	strb r1, [r0]
	ldrh r0, [r2]
	add r4, r4, #2
	add r0, r0, r4
	strb r5, [r0]
	ldrh r0, [r2]
	add r4, r4, #1
	add r0, r0, r4
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r1, _081278BC  @ =gUnknown_02005485
	add r0, r0, r1
	lsr r1, r5, #8
	strb r1, [r0]
	ldrh r0, [r2]
	add r4, r4, #2
	add r0, r0, r4
	strb r3, [r0]
	ldrh r0, [r2]
	ldr r1, _081278C0  @ =gUnknown_02005487
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #8
	b _081278E0
_081278A4:
	.4byte gUnknown_08180AD8
_081278A8:
	.4byte gRam
_081278AC:
	.4byte 0x00001AD2
_081278B0:
	.4byte gTextPointer
_081278B4:
	.4byte gUnknown_02005481
_081278B8:
	.4byte gUnknown_02005482
_081278BC:
	.4byte gUnknown_02005485
_081278C0:
	.4byte gUnknown_02005487
_081278C4:
	ldr r2, _081278FC  @ =gRam
	ldr r4, _08127900  @ =0x00001AD2
	add r2, r2, r4
	ldrh r0, [r2]
	ldr r1, _08127904  @ =gTextPointer
	add r0, r0, r1
	mov r1, #31
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r4, _08127908  @ =gUnknown_02005481
	add r0, r0, r4
	strb r5, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
_081278E0:
	strh r0, [r2]
_081278E2:
	ldr r1, _081278FC  @ =gRam
	ldr r0, _0812790C  @ =0x00001AD6
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, r9
	strh r0, [r1]
	mov r0, r8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
_081278FC:
	.4byte gRam
_08127900:
	.4byte 0x00001AD2
_08127904:
	.4byte gTextPointer
_08127908:
	.4byte gUnknown_02005481
_0812790C:
	.4byte 0x00001AD6
	THUMB_FUNC_END sub_0812775C

