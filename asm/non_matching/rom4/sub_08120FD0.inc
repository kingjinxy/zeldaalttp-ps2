	THUMB_FUNC_START sub_08120FD0
sub_08120FD0: @ 0x08120FD0
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_0811F980
	bl sub_080C2774
	ldr r5, _08121078  @ =gRam
	ldr r1, _0812107C  @ =0x00000E15
	add r0, r5, r1
	add r4, r4, r0
	mov r1, #0
	strb r1, [r4]
	ldr r2, _08121080  @ =0x00001718
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _08121084  @ =0x00000CA2
	add r2, r5, r0
	mov r6, #0
	mov r0, #1
	strh r0, [r2]
	ldr r2, _08121088  @ =0x000017B0
	add r0, r5, r2
	strh r1, [r0]
	sub r2, r2, #10
	add r0, r5, r2
	strh r1, [r0]
	sub r2, r2, #161
	add r0, r5, r2
	strb r6, [r0]
	sub r2, r2, #26
	add r0, r5, r2
	strb r6, [r0]
	sub r2, r2, #230
	add r0, r5, r2
	strb r6, [r0]
	ldr r2, _0812108C  @ =0x00000A28
	add r0, r5, r2
	strh r1, [r0]
	add r2, r2, #2
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _08121090  @ =0x000009C6
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #71
	bne _08121062
	ldr r0, _08121094  @ =gUnknown_020022C7
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _08121062
	mov r0, #3
	bl sub_080BF9D8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08121062
	ldr r2, _08121098  @ =0x00000B6E
	add r1, r5, r2
	mov r0, #4
	strb r0, [r1]
	ldr r1, _0812109C  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _081210A0  @ =0x00000A02
	add r0, r5, r2
	strb r6, [r0]
_08121062:
	ldr r1, _08121078  @ =gRam
	ldr r2, _081210A4  @ =0x000016EA
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r1, #0
	cmp r2, #0
	bne _081210AC
	ldr r1, _081210A8  @ =0x000016E8
	add r0, r3, r1
	strb r2, [r0]
	b _081210BC
_08121078:
	.4byte gRam
_0812107C:
	.4byte 0x00000E15
_08121080:
	.4byte 0x00001718
_08121084:
	.4byte 0x00000CA2
_08121088:
	.4byte 0x000017B0
_0812108C:
	.4byte 0x00000A28
_08121090:
	.4byte 0x000009C6
_08121094:
	.4byte gUnknown_020022C7
_08121098:
	.4byte 0x00000B6E
_0812109C:
	.4byte 0x000009E8
_081210A0:
	.4byte 0x00000A02
_081210A4:
	.4byte 0x000016EA
_081210A8:
	.4byte 0x000016E8
_081210AC:
	ldr r2, _081210D4  @ =0x00000545
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r2, _081210D8  @ =0x000016E8
	add r1, r3, r2
	strb r0, [r1]
_081210BC:
	ldr r0, _081210DC  @ =0x00001719
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r2, _081210E0  @ =0x000017B0
	add r1, r3, r2
	mov r0, #255
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081210D4:
	.4byte 0x00000545
_081210D8:
	.4byte 0x000016E8
_081210DC:
	.4byte 0x00001719
_081210E0:
	.4byte 0x000017B0
	THUMB_FUNC_END sub_08120FD0

