	THUMB_FUNC_START sub_081300EC
sub_081300EC: @ 0x081300EC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _08130194  @ =gUnknown_0822BBB4
	ldr r1, _08130198  @ =gRam
	ldr r3, _0813019C  @ =0x00000CA6
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r4, #7
	lsl r0, r0, #1
	ldr r5, _081301A0  @ =gUnknown_02030400
	add r3, r0, r5
	mov r2, #202
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r5, _081301A4  @ =gUnknown_02000AC0
	add r2, r0, r5
_08130118:
	ldrh r0, [r3]
	strh r0, [r2]
	add r3, r3, #2
	add r2, r2, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08130118
	ldr r2, _081301A8  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _0813018A
	mov r6, #0
	mov r3, #248
	lsl r3, r3, #2
	mov r12, r3
	mov r4, #248
	lsl r4, r4, #7
	mov r8, r4
	ldr r7, _081301AC  @ =0x000013FF
_08130140:
	lsl r5, r6, #1
	ldr r1, _081301A4  @ =gUnknown_02000AC0
	add r0, r5, r1
	ldrh r2, [r0]
	add r4, r2, #0
	mov r0, #31
	and r2, r2, r0
	cmp r2, #4
	bls _08130158
	sub r0, r2, #5
	lsl r0, r0, #16
	lsr r2, r0, #16
_08130158:
	add r3, r4, #0
	mov r0, r12
	and r3, r3, r0
	cmp r3, #159
	bls _0813016A
	add r0, r3, #0
	sub r0, r0, #160
	lsl r0, r0, #16
	lsr r3, r0, #16
_0813016A:
	mov r1, r8
	and r1, r1, r4
	cmp r1, r7
	bls _0813017A
	ldr r4, _081301B0  @ =0xFFFFEC00
	add r0, r1, r4
	lsl r0, r0, #16
	lsr r1, r0, #16
_0813017A:
	ldr r4, _081301B4  @ =gUnknown_02000B40
	add r0, r5, r4
	orr r2, r2, r3
	orr r1, r1, r2
	strh r1, [r0]
	add r6, r6, #1
	cmp r6, #7
	ble _08130140
_0813018A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08130194:
	.4byte gUnknown_0822BBB4
_08130198:
	.4byte gRam
_0813019C:
	.4byte 0x00000CA6
_081301A0:
	.4byte gUnknown_02030400
_081301A4:
	.4byte gUnknown_02000AC0
_081301A8:
	.4byte 0x000009DA
_081301AC:
	.4byte 0x000013FF
_081301B0:
	.4byte 0xFFFFEC00
_081301B4:
	.4byte gUnknown_02000B40
	THUMB_FUNC_END sub_081300EC

