	THUMB_FUNC_START sub_081290B4
sub_081290B4: @ 0x081290B4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	mov r12, r1
	ldrh r4, [r7]
	ldrh r5, [r1]
	lsr r0, r4, #1
	lsl r0, r0, #1
	ldr r1, _081290FC  @ =gUnknown_02000402
	add r0, r0, r1
	ldr r3, _08129100  @ =gRam
	ldr r1, _08129104  @ =0x00001AC8
	add r2, r3, r1
	ldrh r1, [r2]
	strh r1, [r0]
	add r0, r4, #2
	lsl r1, r0, #16
	lsr r4, r1, #16
	ldrh r0, [r2]
	add r0, r0, #64
	strh r0, [r2]
	ldr r2, _08129108  @ =0x0000098E
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r8, r3
	cmp r0, #0
	bne _0812910C
	lsr r0, r1, #17
	lsl r0, r0, #1
	ldr r1, _081290FC  @ =gUnknown_02000402
	add r0, r0, r1
	mov r1, #23
	b _08129116
_081290FC:
	.4byte gUnknown_02000402
_08129100:
	.4byte gRam
_08129104:
	.4byte 0x00001AC8
_08129108:
	.4byte 0x0000098E
_0812910C:
	lsr r0, r1, #17
	lsl r0, r0, #1
	ldr r2, _08129174  @ =gUnknown_02000402
	add r0, r0, r2
	mov r1, #24
_08129116:
	strh r1, [r0]
	add r2, r4, #2
	lsl r2, r2, #16
	lsr r1, r2, #17
	lsl r1, r1, #1
	ldr r6, _08129174  @ =gUnknown_02000402
	add r1, r1, r6
	ldr r3, _08129178  @ =gUnknown_08180CBC
	lsr r0, r5, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #128
	lsl r0, r0, #10
	add r2, r2, r0
	lsr r4, r2, #16
	add r0, r5, #2
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsr r0, r0, #17
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r2, [r0]
	ldr r0, _0812917C  @ =0x0000098E
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r8, r3
	cmp r0, #0
	bne _08129180
	mov r1, #21
	add r3, r5, #2
	add r5, r6, #0
_0812915C:
	lsr r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r2, [r0]
	add r0, r4, #2
	lsl r0, r0, #16
	lsr r4, r0, #16
	sub r1, r1, #1
	cmp r1, #0
	bne _0812915C
	b _0812919A
	.byte 0x00
	.byte 0x00
_08129174:
	.4byte gUnknown_02000402
_08129178:
	.4byte gUnknown_08180CBC
_0812917C:
	.4byte 0x0000098E
_08129180:
	mov r1, #22
	add r3, r5, #2
	add r5, r6, #0
_08129186:
	lsr r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r2, [r0]
	add r0, r4, #2
	lsl r0, r0, #16
	lsr r4, r0, #16
	sub r1, r1, #1
	cmp r1, #0
	bne _08129186
_0812919A:
	lsl r0, r3, #16
	lsr r5, r0, #16
	lsr r1, r4, #1
	lsl r1, r1, #1
	ldr r2, _081291C4  @ =gUnknown_02000402
	add r1, r1, r2
	lsr r0, r0, #17
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r4, #2
	strh r0, [r7]
	mov r0, r12
	strh r5, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081291C4:
	.4byte gUnknown_02000402
	THUMB_FUNC_END sub_081290B4

