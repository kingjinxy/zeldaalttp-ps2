	THUMB_FUNC_START sub_08103720
sub_08103720: @ 0x08103720
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103828
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _081037A0  @ =gRam
	ldr r2, _081037A4  @ =0x0000097D
	add r0, r1, r2
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _08103764
	sub r2, r2, #1
	add r0, r1, r2
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _08103764
	bl sub_080AF16C
	bl sub_0809945C
_08103764:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r3, _081037A0  @ =gRam
	ldr r1, _081037A8  @ =0x00000F52
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _081037BA
	add r0, r1, #1
	strb r0, [r2]
	cmp r1, #18
	bne _081037B4
	ldr r2, _081037AC  @ =0x00000FA2
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _081037B0  @ =0x00000F54
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	add r2, r2, #34
	add r1, r3, r2
	mov r0, #128
	strb r0, [r1]
	b _08103828
	.byte 0x00
	.byte 0x00
_081037A0:
	.4byte gRam
_081037A4:
	.4byte 0x0000097D
_081037A8:
	.4byte 0x00000F52
_081037AC:
	.4byte 0x00000FA2
_081037B0:
	.4byte 0x00000F54
_081037B4:
	bl sub_081326A0
	b _08103828
_081037BA:
	ldr r1, _081037DC  @ =0x00000FA2
	add r0, r3, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #6
	beq _08103814
	ldr r2, _081037E0  @ =0x000010C2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r1, #0
	cmp r2, #0
	bne _081037E8
	ldr r1, _081037E4  @ =0x00000ACE
	add r0, r3, r1
	strh r2, [r0]
	b _08103828
_081037DC:
	.4byte 0x00000FA2
_081037E0:
	.4byte 0x000010C2
_081037E4:
	.4byte 0x00000ACE
_081037E8:
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	ldr r1, _08103808  @ =gUnknown_0817BA2C
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0810380C  @ =0x00000AC8
	add r0, r3, r2
	strh r1, [r0]
	ldr r0, _08103810  @ =0x00000ACE
	add r1, r3, r0
	mov r0, #1
	strh r0, [r1]
	b _08103828
_08103808:
	.4byte gUnknown_0817BA2C
_0810380C:
	.4byte 0x00000AC8
_08103810:
	.4byte 0x00000ACE
_08103814:
	ldr r1, _08103830  @ =0x00001032
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r0, #9
	strb r0, [r5]
_08103828:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_08103830:
	.4byte 0x00001032
	THUMB_FUNC_END sub_08103720

