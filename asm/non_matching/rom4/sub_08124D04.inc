	THUMB_FUNC_START sub_08124D04
sub_08124D04: @ 0x08124D04
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	bl sub_08124BA8
	mov r0, #0
	mov r1, #68
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	bne _08124DDA
	bl sub_081333E8
	ldr r2, _08124DEC  @ =gRam
	ldr r1, _08124DF0  @ =0x00001770
	add r0, r2, r1
	mov r1, #1
	strb r1, [r0]
	ldr r3, _08124DF4  @ =0x00001649
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _08124DF8  @ =0x00001898
	add r0, r2, r1
	strb r4, [r0]
	mov r1, sp
	ldr r3, _08124DFC  @ =0x00000E1F
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	add r3, r3, #20
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #160
	strb r1, [r0]
	ldr r0, _08124E00  @ =gUnknown_020068F8
	strb r4, [r0]
	add r0, r0, #2
	strb r4, [r0]
	ldr r1, _08124E04  @ =gUnknown_020068FB
	mov r0, #128
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #80
	strb r0, [r1]
	mov r5, #0
	add r6, r2, #0
	ldr r0, _08124E08  @ =gUnknown_081804C0
	mov r9, r0
	mov r1, #0
	mov r8, r1
	mov r4, sp
	ldr r2, _08124E0C  @ =0x00000A88
	add r2, r2, r6
	mov r10, r2
_08124D84:
	lsl r0, r5, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r7, r6, r3
	strh r0, [r7]
	lsl r0, r5, #2
	add r0, r0, r9
	ldrh r1, [r0]
	ldr r2, _08124E10  @ =0x00000964
	add r0, r6, r2
	strh r1, [r0]
	ldrb r0, [r4]
	bl sub_080ABA78
	ldr r3, _08124E14  @ =0x00000A92
	add r0, r6, r3
	ldrb r1, [r4]
	add r0, r0, r1
	mov r2, r8
	strb r2, [r0]
	ldrb r0, [r4]
	add r0, r0, r10
	strb r2, [r0]
	ldrb r0, [r4]
	add r1, r5, #0
	bl sub_08124A8C
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #3
	bls _08124D84
	add r1, r7, #0
	add r1, r1, #222
	mov r0, #1
	strb r0, [r1]
	sub r1, r1, #2
	ldr r0, _08124E18  @ =0x0000FFF1
	strh r0, [r1]
_08124DDA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08124DEC:
	.4byte gRam
_08124DF0:
	.4byte 0x00001770
_08124DF4:
	.4byte 0x00001649
_08124DF8:
	.4byte 0x00001898
_08124DFC:
	.4byte 0x00000E1F
_08124E00:
	.4byte gUnknown_020068F8
_08124E04:
	.4byte gUnknown_020068FB
_08124E08:
	.4byte gUnknown_081804C0
_08124E0C:
	.4byte 0x00000A88
_08124E10:
	.4byte 0x00000964
_08124E14:
	.4byte 0x00000A92
_08124E18:
	.4byte 0x0000FFF1
	THUMB_FUNC_END sub_08124D04

