	THUMB_FUNC_START sub_08069F08
sub_08069F08: @ 0x08069F08
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #1
	mov r1, #0
	ldr r0, _08069FE0  @ =gRam
	mov r10, r0
	ldr r7, _08069FE4  @ =gUnknown_02000C00
	mov r3, #248
	lsl r3, r3, #2
	mov r9, r3
	mov r0, #248
	lsl r0, r0, #7
	mov r8, r0
	mov r3, #128
	lsl r3, r3, #2
	mov r12, r3
_08069F2E:
	lsl r0, r1, #16
	asr r1, r0, #15
	add r1, r1, r7
	ldrh r2, [r1]
	mov r3, #0
	ldrsh r4, [r1, r3]
	mov r1, #31
	and r4, r4, r1
	add r1, r4, #0
	add r5, r0, #0
	cmp r1, #0
	beq _08069F52
	sub r0, r1, #4
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r0, #0
	bge _08069F52
	mov r4, #0
_08069F52:
	add r3, r2, #0
	mov r0, r9
	and r3, r3, r0
	add r0, r3, #0
	lsl r1, r2, #16
	cmp r0, #0
	beq _08069F6C
	sub r0, r0, #128
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r0, #0
	bge _08069F6C
	mov r3, #0
_08069F6C:
	lsr r2, r1, #16
	mov r1, r8
	and r2, r2, r1
	add r0, r2, #0
	cmp r0, #0
	beq _08069F86
	ldr r1, _08069FE8  @ =0xFFFFF000
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r0, #0
	bge _08069F86
	mov r2, #0
_08069F86:
	asr r1, r5, #15
	add r1, r1, r7
	orr r3, r3, r4
	orr r2, r2, r3
	lsl r0, r2, #16
	asr r0, r0, #16
	strh r0, [r1]
	cmp r6, #0
	beq _08069FA0
	lsl r0, r0, #16
	cmp r0, #0
	beq _08069FA0
	mov r6, #0
_08069FA0:
	mov r3, #128
	lsl r3, r3, #9
	add r0, r5, r3
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, r12
	bne _08069F2E
	ldr r1, _08069FEC  @ =0x0000099B
	add r1, r1, r10
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08069FF0  @ =0x0000099D
	add r1, r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #7
	ble _08069FD0
	cmp r6, #0
	beq _08069FD0
	mov r0, #0
	strb r0, [r1]
_08069FD0:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069FE0:
	.4byte gRam
_08069FE4:
	.4byte gUnknown_02000C00
_08069FE8:
	.4byte 0xFFFFF000
_08069FEC:
	.4byte 0x0000099B
_08069FF0:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_08069F08

