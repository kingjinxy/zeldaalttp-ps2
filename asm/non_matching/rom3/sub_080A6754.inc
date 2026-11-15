	THUMB_FUNC_START sub_080A6754
sub_080A6754: @ 0x080A6754
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _080A69A4  @ =gUnknown_0816B308
	ldr r1, [r0]
	ldr r3, _080A69A8  @ =gRam
	ldr r2, _080A69AC  @ =0x00000968
	add r0, r3, r2
	mov r4, #0
	ldrsh r0, [r0, r4]
	add r1, r1, r0
	ldr r0, _080A69B0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r5, r0, #16
	lsr r7, r5, #16
	ldr r1, _080A69B4  @ =gUnknown_081697A0
	ldr r6, _080A69B8  @ =0x00000964
	add r0, r3, r6
	mov r2, #0
	ldrsh r0, [r0, r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r4, _080A69BC  @ =0x0000097C
	add r0, r3, r4
	strh r1, [r0]
	lsl r2, r1, #1
	ldr r6, _080A69C0  @ =0x0000189A
	add r0, r3, r6
	strh r2, [r0]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r0, _080A69C4  @ =0x00000961
	add r1, r3, r0
	ldr r4, _080A69C8  @ =gUnknown_08169180
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r6, _080A69CC  @ =0x0000097D
	add r1, r3, r6
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	add r0, r2, #1
	add r0, r0, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	add r2, r2, #2
	add r2, r2, r4
	ldrb r0, [r2]
	lsl r0, r0, #8
	ldr r2, _080A69D0  @ =0x0000096C
	add r1, r3, r2
	strh r0, [r1]
	ldr r2, _080A69D4  @ =0xFFFFF000
	and r2, r2, r0
	mov r0, #240
	lsl r0, r0, #8
	mov r8, r3
	cmp r2, r0
	beq _080A68AC
	ldr r0, _080A69D8  @ =0x00001723
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r0, _080A69DC  @ =0x00001724
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r2, r2, r1
	lsl r0, r2, #16
	lsr r2, r0, #16
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	orr r2, r2, r0
	add r0, r7, #0
	add r1, r2, #0
	bl sub_080A452C
	lsr r0, r5, #18
	lsl r0, r0, #3
	mov r1, #170
	lsl r1, r1, #3
	add r1, r1, r8
	add r3, r0, r1
	ldr r0, _080A69E0  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A685E
	ldr r4, _080A69E4  @ =0x000001FF
	add r5, r4, #0
	add r0, r6, #0
	and r0, r0, r5
	ldrh r1, [r3, #2]
	ldr r4, _080A69E8  @ =0xFFFFFE00
	add r2, r4, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r0, r9
	strb r0, [r3]
	cmp r6, #240
	bls _080A685E
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r5
	and r2, r2, r4
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A685E:
	lsr r0, r7, #2
	lsl r0, r0, #3
	ldr r1, _080A69EC  @ =gUnknown_03002780
	add r4, r0, r1
	ldr r2, _080A69F0  @ =0x0000108C
	add r6, r1, r2
	ldrb r0, [r6]
	ldr r3, _080A69F4  @ =0x00000B72
	add r2, r1, r3
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r3, _080A69F8  @ =0xFFFFFAB0
	add r3, r3, r1
	mov r8, r3
	cmp r0, #0
	beq _080A68AC
	ldrb r1, [r4, #5]
	mov r0, #15
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4, #5]
	ldrh r3, [r4, #2]
	lsl r1, r3, #23
	lsr r1, r1, #23
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r6, _080A69E4  @ =0x000001FF
	add r0, r6, #0
	and r1, r1, r0
	ldr r0, _080A69E8  @ =0xFFFFFE00
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r4, #2]
_080A68AC:
	ldr r0, _080A69D0  @ =0x0000096C
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #4
	add r2, r0, #0
	and r2, r2, r1
	cmp r2, r0
	beq _080A6996
	lsl r1, r2, #4
	ldr r0, _080A69D8  @ =0x00001723
	add r0, r0, r8
	ldrb r2, [r0]
	ldr r0, _080A69DC  @ =0x00001724
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r2
	mov r0, #0
	lsl r0, r0, #9
	orr r1, r1, r0
	mov r0, #2
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	add r5, r7, #4
	lsl r4, r5, #16
	lsr r0, r4, #16
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	bl sub_080A452C
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	mov r6, #128
	lsl r6, r6, #4
	add r0, r6, #0
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	mov r1, #255
	and r1, r1, r2
	lsr r6, r2, #8
	lsr r4, r4, #18
	lsl r4, r4, #3
	mov r0, #170
	lsl r0, r0, #3
	add r0, r0, r8
	add r3, r4, r0
	ldr r0, _080A69E0  @ =gUnknown_03003E68
	ldrb r0, [r0]
	add r7, r5, #0
	cmp r0, #0
	bne _080A694C
	ldr r0, _080A69E4  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r3, #2]
	ldr r5, _080A69E8  @ =0xFFFFFE00
	add r2, r5, #0
	and r2, r2, r0
	orr r2, r2, r1
	strh r2, [r3, #2]
	strb r6, [r3]
	cmp r1, #240
	bls _080A694C
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r5
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A694C:
	lsl r0, r7, #16
	lsr r0, r0, #18
	lsl r0, r0, #3
	ldr r1, _080A69EC  @ =gUnknown_03002780
	add r5, r0, r1
	ldr r2, _080A69F0  @ =0x0000108C
	add r4, r1, r2
	ldrb r0, [r4]
	ldr r3, _080A69F4  @ =0x00000B72
	add r2, r1, r3
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A6996
	ldrb r1, [r5, #5]
	mov r0, #15
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r5, #5]
	ldrh r3, [r5, #2]
	lsl r1, r3, #23
	lsr r1, r1, #23
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r4, _080A69E4  @ =0x000001FF
	add r0, r4, #0
	and r1, r1, r0
	ldr r0, _080A69E8  @ =0xFFFFFE00
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r5, #2]
_080A6996:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A69A4:
	.4byte gUnknown_0816B308
_080A69A8:
	.4byte gRam
_080A69AC:
	.4byte 0x00000968
_080A69B0:
	.4byte gUnknown_03003E74
_080A69B4:
	.4byte gUnknown_081697A0
_080A69B8:
	.4byte 0x00000964
_080A69BC:
	.4byte 0x0000097C
_080A69C0:
	.4byte 0x0000189A
_080A69C4:
	.4byte 0x00000961
_080A69C8:
	.4byte gUnknown_08169180
_080A69CC:
	.4byte 0x0000097D
_080A69D0:
	.4byte 0x0000096C
_080A69D4:
	.4byte 0xFFFFF000
_080A69D8:
	.4byte 0x00001723
_080A69DC:
	.4byte 0x00001724
_080A69E0:
	.4byte gUnknown_03003E68
_080A69E4:
	.4byte 0x000001FF
_080A69E8:
	.4byte 0xFFFFFE00
_080A69EC:
	.4byte gUnknown_03002780
_080A69F0:
	.4byte 0x0000108C
_080A69F4:
	.4byte 0x00000B72
_080A69F8:
	.4byte 0xFFFFFAB0
	THUMB_FUNC_END sub_080A6754
