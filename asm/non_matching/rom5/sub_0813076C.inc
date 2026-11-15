	THUMB_FUNC_START sub_0813076C
sub_0813076C: @ 0x0813076C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _081307EC  @ =gUnknown_0822BC44
	ldr r2, _081307F0  @ =gRam
	ldr r3, _081307F4  @ =0x00000CAD
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r7, #224
	lsl r7, r7, #4
	add r0, r0, r7
	mov r1, #2
	mov r4, #88
	ldr r6, _081307F8  @ =gUnknown_02030000
	lsl r0, r0, #16
	lsr r3, r0, #16
	mov r0, #7
	mov r8, r0
	mov r9, r2
	mov r2, #202
	lsl r2, r2, #4
	add r2, r2, r9
	mov r12, r2
	ldr r7, _081307FC  @ =0x0000FF08
	mov r10, r7
_081307A8:
	mov r2, r12
	ldrh r0, [r2]
	add r0, r4, r0
	mov r2, r8
	add r4, r4, #16
	sub r5, r1, #1
	cmp r2, #0
	blt _081307D4
	lsl r0, r0, #1
	ldr r7, _08130800  @ =gUnknown_02000800
	add r1, r0, r7
_081307BE:
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _081307BE
_081307D4:
	mov r0, #255
	and r0, r0, r3
	cmp r0, #0
	beq _0813080C
	mov r0, #248
	and r0, r0, r3
	cmp r0, #248
	bne _08130804
	mov r0, r10
	and r3, r3, r0
	b _0813080C
	.byte 0x00
	.byte 0x00
_081307EC:
	.4byte gUnknown_0822BC44
_081307F0:
	.4byte gRam
_081307F4:
	.4byte 0x00000CAD
_081307F8:
	.4byte gUnknown_02030000
_081307FC:
	.4byte 0x0000FF08
_08130800:
	.4byte gUnknown_02000800
_08130804:
	add r0, r3, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r3, r0, #16
_0813080C:
	add r1, r5, #0
	cmp r1, #0
	bge _081307A8
	ldr r2, _08130840  @ =gUnknown_02000850
	ldr r0, _08130844  @ =0x000009CC
	add r0, r0, r9
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r0, _08130848  @ =gUnknown_02000870
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130840:
	.4byte gUnknown_02000850
_08130844:
	.4byte 0x000009CC
_08130848:
	.4byte gUnknown_02000870
	THUMB_FUNC_END sub_0813076C

