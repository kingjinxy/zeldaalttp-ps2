	THUMB_FUNC_START sub_08122888
sub_08122888: @ 0x08122888
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _08122904  @ =gRam
	ldr r1, _08122908  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _081228A6
	b _08122D08
_081228A6:
	ldr r2, _0812290C  @ =0x00000E33
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08122928
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldrh r0, [r0]
	sub r0, r0, #8
	mov r6, #150
	lsl r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
	ldr r2, _08122910  @ =0x00000952
	add r0, r4, r2
	ldrh r0, [r0]
	sub r0, r0, #16
	ldr r3, _08122914  @ =0x00000964
	add r2, r4, r3
	strh r0, [r2]
	ldr r6, _08122918  @ =0x00000DC5
	add r0, r4, r6
	add r0, r7, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0812291C  @ =0x00000DD9
	add r0, r4, r1
	add r0, r7, r0
	sub r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	add r6, r6, #10
	add r0, r4, r6
	add r0, r7, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r1, _08122920  @ =0x00000DE3
	add r0, r4, r1
	add r0, r7, r0
	ldr r2, _08122924  @ =0x00000965
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _08122ED8
_08122904:
	.4byte gRam
_08122908:
	.4byte 0x000009AD
_0812290C:
	.4byte 0x00000E33
_08122910:
	.4byte 0x00000952
_08122914:
	.4byte 0x00000964
_08122918:
	.4byte 0x00000DC5
_0812291C:
	.4byte 0x00000DD9
_08122920:
	.4byte 0x00000DE3
_08122924:
	.4byte 0x00000965
_08122928:
	ldr r3, _08122A2C  @ =0x00001827
	add r0, r4, r3
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08122946
	mov r0, #40
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #100
	bl sub_080C19F8
_08122946:
	ldr r6, _08122A30  @ =0x00001818
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08122968
	ldr r1, _08122A34  @ =0x00000E1F
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812297C
	ldr r2, _08122A38  @ =0x00001605
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08122968:
	ldr r3, _08122A3C  @ =0x00000A88
	add r1, r4, r3
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #255
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #0
	bl sub_080BF804
_0812297C:
	add r0, r7, #0
	bl sub_080C1768
	ldr r4, _08122A40  @ =gRam
	ldr r6, _08122A30  @ =0x00001818
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08122992
	b _08122BE4
_08122992:
	add r0, r7, #0
	mov r1, #1
	bl sub_080BF880
	lsl r0, r0, #24
	cmp r0, #0
	bne _081229A2
	b _08122D08
_081229A2:
	ldr r1, _08122A44  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #15
	bne _081229AE
	b _08122D08
_081229AE:
	ldr r2, _08122A48  @ =0x000009B2
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r3, r4, #0
	cmp r0, #0
	beq _081229C0
	b _08122B1C
_081229C0:
	ldr r6, _08122A4C  @ =0x00001718
	add r0, r3, r6
	ldrb r0, [r0]
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _081229D2
	b _08122D08
_081229D2:
	ldr r1, _08122A50  @ =0x00001716
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _081229DE
	b _08122D08
_081229DE:
	ldr r2, _08122A54  @ =0x0000175F
	add r0, r3, r2
	add r6, r6, #248
	add r1, r3, r6
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r2, _08122A58  @ =0x00001885
	add r1, r3, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r6, r6, #3
	add r1, r3, r6
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _08122A02
	b _08122D08
_08122A02:
	ldr r1, _08122A5C  @ =0x00001791
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08122A12
	b _08122D08
_08122A12:
	mov r6, #4
_08122A14:
	ldr r2, _08122A60  @ =0x00000E15
	add r0, r3, r2
	add r0, r7, r0
	ldrb r0, [r0]
	sub r0, r0, #31
	cmp r0, #34
	bhi _08122AFE
	lsl r0, r0, #2
	ldr r1, _08122A64  @ =0x08122A68
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08122A2C:
	.4byte 0x00001827
_08122A30:
	.4byte 0x00001818
_08122A34:
	.4byte 0x00000E1F
_08122A38:
	.4byte 0x00001605
_08122A3C:
	.4byte 0x00000A88
_08122A40:
	.4byte gRam
_08122A44:
	.4byte 0x000009AC
_08122A48:
	.4byte 0x000009B2
_08122A4C:
	.4byte 0x00001718
_08122A50:
	.4byte 0x00001716
_08122A54:
	.4byte 0x0000175F
_08122A58:
	.4byte 0x00001885
_08122A5C:
	.4byte 0x00001791
_08122A60:
	.4byte 0x00000E15
_08122A64:
	.4byte 0x08122A68
	.4byte _08122AF4
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AF4
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AF4
	.4byte _08122AF4
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AFE
	.4byte _08122AF4
_08122AF4:
	ldr r1, _08122BA4  @ =0x00000E15
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
_08122AFE:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bgt _08122A14
	ldr r6, _08122BA8  @ =0x00001663
	add r2, r3, r6
	ldrb r0, [r2]
	cmp r0, #9
	bne _08122B1C
	mov r1, #0
	strb r1, [r2]
	ldr r2, _08122BAC  @ =0x00001787
	add r0, r3, r2
	strb r1, [r0]
_08122B1C:
	ldr r5, _08122BB0  @ =gRam
	ldr r3, _08122BB4  @ =0x00001791
	add r0, r5, r3
	mov r1, #0
	strb r1, [r0]
	ldr r6, _08122BB8  @ =0x00000A28
	add r0, r5, r6
	mov r4, #0
	strh r1, [r0]
	ldr r2, _08122BBC  @ =0x00000A2A
	add r0, r5, r2
	strh r1, [r0]
	bl sub_08092E50
	ldr r3, _08122BC0  @ =0x000017D4
	add r0, r5, r3
	strb r4, [r0]
	ldr r6, _08122BC4  @ =0x0000188F
	add r0, r5, r6
	strb r4, [r0]
	mov r0, #184
	lsl r0, r0, #5
	add r1, r5, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _08122BC8  @ =0x00001718
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08122BCC  @ =0x0000175F
	add r0, r5, r2
	mov r1, #1
	strb r1, [r0]
	sub r3, r3, #100
	add r0, r5, r3
	strb r1, [r0]
	sub r6, r6, #130
	add r0, r5, r6
	strb r1, [r0]
	add r2, r2, #40
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08122BD0  @ =0x00000E1F
	add r0, r5, r3
	add r0, r7, r0
	mov r1, #2
	strb r1, [r0]
	ldr r6, _08122BD4  @ =0x00001605
	add r1, r5, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08122BD8  @ =0x00001805
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08122BDC  @ =0x000009B2
	add r0, r5, r2
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08122B9A
	b _08122D08
_08122B9A:
	ldr r3, _08122BE0  @ =0x00001895
	add r0, r5, r3
	strb r1, [r0]
	b _08122D08
	.byte 0x00
	.byte 0x00
_08122BA4:
	.4byte 0x00000E15
_08122BA8:
	.4byte 0x00001663
_08122BAC:
	.4byte 0x00001787
_08122BB0:
	.4byte gRam
_08122BB4:
	.4byte 0x00001791
_08122BB8:
	.4byte 0x00000A28
_08122BBC:
	.4byte 0x00000A2A
_08122BC0:
	.4byte 0x000017D4
_08122BC4:
	.4byte 0x0000188F
_08122BC8:
	.4byte 0x00001718
_08122BCC:
	.4byte 0x0000175F
_08122BD0:
	.4byte 0x00000E1F
_08122BD4:
	.4byte 0x00001605
_08122BD8:
	.4byte 0x00001805
_08122BDC:
	.4byte 0x000009B2
_08122BE0:
	.4byte 0x00001895
_08122BE4:
	ldr r6, _08122CAC  @ =0x00000DCF
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r5, r4, r1
	mov r3, #0
	strb r0, [r5]
	ldr r2, _08122CB0  @ =0x00000DE3
	add r0, r4, r2
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r6, _08122CB4  @ =0x00000961
	add r0, r4, r6
	strb r1, [r0]
	ldr r1, _08122CB8  @ =0x00000E1F
	add r0, r4, r1
	add r2, r7, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08122C1A
	ldr r6, _08122CBC  @ =0x00001605
	add r1, r4, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08122C1A:
	mov r0, #0
	ldrsh r1, [r5, r0]
	cmp r1, #0
	blt _08122CE0
	ldr r6, _08122CC0  @ =0x000016C4
	add r5, r4, r6
	mov r6, #0
	ldrsh r0, [r5, r6]
	cmp r1, r0
	blt _08122CE0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08122D08
	strb r3, [r2]
	mov r1, #184
	lsl r1, r1, #5
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _08122CC4  @ =0x00001787
	add r0, r4, r2
	strb r3, [r0]
	ldr r6, _08122CC8  @ =0x0000175F
	add r0, r4, r6
	strb r3, [r0]
	ldr r1, _08122CCC  @ =0x00000DED
	add r0, r4, r1
	add r0, r7, r0
	strb r3, [r0]
	sub r2, r2, #23
	add r0, r4, r2
	strb r3, [r0]
	add r6, r6, #174
	add r0, r4, r6
	strb r3, [r0]
	ldr r1, _08122CD0  @ =0x00001895
	add r0, r4, r1
	strb r3, [r0]
	add r2, r2, #58
	add r1, r4, r2
	mov r0, #144
	strb r0, [r1]
	mov r3, #0
	ldrsh r0, [r5, r3]
	mov r6, #182
	lsl r6, r6, #5
	add r1, r4, r6
	mov r2, #0
	ldrsh r1, [r1, r2]
	add r1, r1, #16
	bl sub_080691D8
	cmp r0, #8
	bne _08122C8C
	ldr r3, _08122CD4  @ =0x00001718
	add r1, r4, r3
	mov r0, #4
	strb r0, [r1]
_08122C8C:
	ldr r6, _08122CD8  @ =0x00001663
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #13
	beq _08122C9A
	cmp r0, #12
	beq _08122CA4
_08122C9A:
	ldr r1, _08122CDC  @ =0x0000166A
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08122D08
_08122CA4:
	bl sub_08114600
	b _08122D08
	.byte 0x00
	.byte 0x00
_08122CAC:
	.4byte 0x00000DCF
_08122CB0:
	.4byte 0x00000DE3
_08122CB4:
	.4byte 0x00000961
_08122CB8:
	.4byte 0x00000E1F
_08122CBC:
	.4byte 0x00001605
_08122CC0:
	.4byte 0x000016C4
_08122CC4:
	.4byte 0x00001787
_08122CC8:
	.4byte 0x0000175F
_08122CCC:
	.4byte 0x00000DED
_08122CD0:
	.4byte 0x00001895
_08122CD4:
	.4byte 0x00001718
_08122CD8:
	.4byte 0x00001663
_08122CDC:
	.4byte 0x0000166A
_08122CE0:
	ldr r0, _08122D00  @ =gRam
	ldr r2, _08122D04  @ =0x000016C4
	add r1, r0, r2
	mov r3, #0
	ldrsh r1, [r1, r3]
	mov r6, #150
	lsl r6, r6, #4
	add r0, r0, r6
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r1, r1, r0
	cmp r1, #47
	ble _08122D08
	mov r1, #3
	b _08122D42
	.byte 0x00
	.byte 0x00
_08122D00:
	.4byte gRam
_08122D04:
	.4byte 0x000016C4
_08122D08:
	ldr r1, _08122D74  @ =gRam
	ldr r3, _08122D78  @ =0x00001832
	add r0, r1, r3
	add r2, r7, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	add r3, r1, #0
	cmp r0, #0
	bge _08122D3A
	mov r0, #3
	strb r0, [r2]
	ldr r6, _08122D7C  @ =0x00001813
	add r0, r3, r6
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _08122D3A
	mov r0, #0
	strb r0, [r1]
_08122D3A:
	ldr r1, _08122D7C  @ =0x00001813
	add r0, r3, r1
	add r0, r7, r0
	ldrb r1, [r0]
_08122D42:
	ldr r4, _08122D74  @ =gRam
	ldr r0, _08122D80  @ =gUnknown_081803DC
	add r0, r1, r0
	ldrb r1, [r0]
	ldr r2, _08122D84  @ =0x00000CEA
	add r0, r4, r2
	strh r1, [r0]
	add r0, r7, #0
	bl sub_080C177C
	ldr r3, _08122D88  @ =0x00000A92
	add r0, r4, r3
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08122D90
	mov r6, #255
	lsl r6, r6, #8
	add r1, r6, #0
	orr r0, r0, r1
	ldr r2, _08122D8C  @ =0x00000968
	add r1, r4, r2
	strh r0, [r1]
	b _08122D98
	.byte 0x00
	.byte 0x00
_08122D74:
	.4byte gRam
_08122D78:
	.4byte 0x00001832
_08122D7C:
	.4byte 0x00001813
_08122D80:
	.4byte gUnknown_081803DC
_08122D84:
	.4byte 0x00000CEA
_08122D88:
	.4byte 0x00000A92
_08122D8C:
	.4byte 0x00000968
_08122D90:
	ldrb r1, [r1]
	ldr r3, _08122EE8  @ =0x00000968
	add r0, r4, r3
	strh r1, [r0]
_08122D98:
	ldr r1, _08122EEC  @ =gRam
	ldr r6, _08122EE8  @ =0x00000968
	add r4, r1, r6
	ldrh r2, [r4]
	ldr r3, _08122EF0  @ =0x00001732
	add r0, r1, r3
	strb r2, [r0]
	sub r6, r6, #8
	add r5, r1, r6
	ldrh r3, [r5]
	add r6, r6, #20
	add r0, r1, r6
	strh r3, [r0]
	add r2, r2, r3
	strh r2, [r4]
	ldr r2, _08122EF4  @ =0x00000964
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _08122EF8  @ =0x0000096C
	add r0, r1, r3
	strh r2, [r0]
	ldr r6, _08122EFC  @ =0x00000E1F
	add r0, r1, r6
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, #1
	add r3, r3, #4
	add r2, r1, r3
	strb r0, [r2]
	mov r6, #0
	mov r8, r1
_08122DD6:
	ldr r0, _08122F00  @ =gUnknown_081803D6
	add r0, r6, r0
	ldr r1, _08122EE8  @ =0x00000968
	add r1, r1, r8
	mov r10, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r1]
	add r0, r0, r2
	ldr r3, _08122F04  @ =gUnknown_03002B90
	strh r0, [r3]
	ldr r0, _08122F08  @ =gUnknown_081803D9
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r1, _08122F0C  @ =gUnknown_03002B9C
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _08122EF4  @ =0x00000964
	add r2, r2, r8
	mov r9, r2
	strh r0, [r2]
	ldr r3, _08122F10  @ =gUnknown_03003E74
	ldrh r0, [r3]
	ldrh r1, [r2]
	ldr r3, _08122F04  @ =gUnknown_03002B90
	ldrh r2, [r3]
	ldr r3, _08122F14  @ =gUnknown_081803D0
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _08122F18  @ =gUnknown_081803D3
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #48
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldr r1, _08122F10  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _08122F1C  @ =gUnknown_03002BA0
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r6, r0
	bne _08122DD6
	mov r4, r8
	mov r3, r10
	ldrh r0, [r3, #12]
	add r0, r0, #28
	mov r6, #150
	lsl r6, r6, #4
	add r6, r6, r4
	mov r8, r6
	strh r0, [r6]
	ldr r5, _08122F0C  @ =gUnknown_03002B9C
	ldrh r0, [r5]
	mov r1, r9
	strh r0, [r1]
	mov r6, #48
	strb r6, [r3]
	mov r0, #1
	bl sub_0811B82C
	ldr r2, _08122EFC  @ =0x00000E1F
	add r4, r4, r2
	add r4, r7, r4
	ldrb r0, [r4]
	cmp r0, #0
	beq _08122E90
	ldr r3, _08122F20  @ =gUnknown_03002BA4
	ldrh r0, [r3]
	add r0, r0, #28
	mov r1, r8
	strh r0, [r1]
	ldrh r0, [r5]
	sub r0, r0, #7
	mov r2, r9
	strh r0, [r2]
	mov r3, r10
	strb r6, [r3]
	mov r0, #1
	bl sub_0811B82C
_08122E90:
	ldr r6, _08122F0C  @ =gUnknown_03002B9C
	mov r0, #0
	ldrsh r1, [r6, r0]
	ldr r0, _08122F24  @ =0x0000012F
	cmp r1, r0
	ble _08122ED8
	ldr r0, _08122F28  @ =0x000004AD
	add r0, r0, r10
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, #235
	lsl r0, r0, #4
	add r0, r0, r10
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08122ED8
	ldrb r0, [r4]
	cmp r0, #0
	beq _08122ED8
	mov r1, r10
	add r1, r1, #69
	mov r0, #10
	strb r0, [r1]
	mov r0, r10
	add r0, r0, #53
	mov r2, #0
	strb r2, [r0]
	mov r2, r10
	add r2, r2, #68
	ldrb r1, [r2]
	add r0, r0, #125
	strh r1, [r0]
	mov r0, #14
	strb r0, [r2]
_08122ED8:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08122EE8:
	.4byte 0x00000968
_08122EEC:
	.4byte gRam
_08122EF0:
	.4byte 0x00001732
_08122EF4:
	.4byte 0x00000964
_08122EF8:
	.4byte 0x0000096C
_08122EFC:
	.4byte 0x00000E1F
_08122F00:
	.4byte gUnknown_081803D6
_08122F04:
	.4byte gUnknown_03002B90
_08122F08:
	.4byte gUnknown_081803D9
_08122F0C:
	.4byte gUnknown_03002B9C
_08122F10:
	.4byte gUnknown_03003E74
_08122F14:
	.4byte gUnknown_081803D0
_08122F18:
	.4byte gUnknown_081803D3
_08122F1C:
	.4byte gUnknown_03002BA0
_08122F20:
	.4byte gUnknown_03002BA4
_08122F24:
	.4byte 0x0000012F
_08122F28:
	.4byte 0x000004AD
	THUMB_FUNC_END sub_08122888

