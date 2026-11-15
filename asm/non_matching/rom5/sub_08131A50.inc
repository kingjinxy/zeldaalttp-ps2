	THUMB_FUNC_START sub_08131A50
sub_08131A50: @ 0x08131A50
	push {r4,lr}
	sub sp, sp, #4
	ldr r3, _08131A80  @ =gRam
	ldr r0, _08131A84  @ =0x00000CFA
	add r4, r3, r0
	ldrh r2, [r4]
	cmp r2, #0
	bne _08131A90
	ldr r2, _08131A88  @ =0x00000CF8
	add r1, r3, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	bne _08131AC6
	mov r0, #255
	strh r0, [r4]
	ldr r0, _08131A8C  @ =0x00000C85
	add r1, r3, r0
	mov r0, #32
	strb r0, [r1]
	b _08131AC6
_08131A80:
	.4byte gRam
_08131A84:
	.4byte 0x00000CFA
_08131A88:
	.4byte 0x00000CF8
_08131A8C:
	.4byte 0x00000C85
_08131A90:
	ldr r0, _08131AD8  @ =0x00000CF8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _08131AC6
	mov r0, #2
	eor r0, r0, r2
	strh r0, [r4]
	ldr r1, _08131ADC  @ =0x000009AC
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #21
	bne _08131AC6
	mov r1, sp
	mov r2, #240
	lsl r2, r2, #3
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08131AE0  @ =gUnknown_02001600
	ldr r2, _08131AE4  @ =0x01000100
	mov r0, sp
	bl CpuSet
_08131AC6:
	ldr r0, _08131AE8  @ =gRam
	ldr r1, _08131AEC  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_08131AD8:
	.4byte 0x00000CF8
_08131ADC:
	.4byte 0x000009AC
_08131AE0:
	.4byte gUnknown_02001600
_08131AE4:
	.4byte 0x01000100
_08131AE8:
	.4byte gRam
_08131AEC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131A50

