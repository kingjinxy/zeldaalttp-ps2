	THUMB_FUNC_START sub_0806995C
sub_0806995C: @ 0x0806995C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080699B8  @ =gRam
	mov r2, #169
	lsl r2, r2, #3
	add r0, r1, r2
	ldrb r4, [r0]
	add r5, r1, #0
	cmp r4, #0
	bne _080699D0
	ldr r3, _080699BC  @ =0x00000534
	add r0, r5, r3
	ldrh r4, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r4
	ldr r6, _080699C0  @ =0x0000053E
	add r1, r5, r6
	strb r0, [r1]
	ldr r1, _080699C4  @ =0x00000532
	add r0, r5, r1
	ldrh r3, [r0]
	and r2, r2, r3
	sub r6, r6, #6
	add r0, r5, r6
	strb r2, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	and r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #24
	ldr r3, _080699C8  @ =0x00000539
	add r2, r5, r3
	strb r0, [r2]
	and r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #24
	ldr r4, _080699CC  @ =0x0000053F
	add r0, r5, r4
	strb r1, [r0]
	b _08069AA8
	.byte 0x00
	.byte 0x00
_080699B8:
	.4byte gRam
_080699BC:
	.4byte 0x00000534
_080699C0:
	.4byte 0x0000053E
_080699C4:
	.4byte 0x00000532
_080699C8:
	.4byte 0x00000539
_080699CC:
	.4byte 0x0000053F
_080699D0:
	cmp r4, #1
	bne _08069A24
	ldr r6, _08069A14  @ =0x00000534
	add r0, r5, r6
	ldrh r3, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	and r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #24
	add r6, r6, #10
	add r2, r5, r6
	strb r0, [r2]
	ldr r2, _08069A18  @ =0x00000532
	add r0, r5, r2
	ldrh r2, [r0]
	and r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #24
	sub r6, r6, #6
	add r0, r5, r6
	strb r1, [r0]
	add r0, r4, #0
	and r0, r0, r2
	ldr r2, _08069A1C  @ =0x00000539
	add r1, r5, r2
	strb r0, [r1]
	and r4, r4, r3
	ldr r3, _08069A20  @ =0x0000053F
	add r0, r5, r3
	strb r4, [r0]
	b _08069AA8
	.byte 0x00
	.byte 0x00
_08069A14:
	.4byte 0x00000534
_08069A18:
	.4byte 0x00000532
_08069A1C:
	.4byte 0x00000539
_08069A20:
	.4byte 0x0000053F
_08069A24:
	ldr r4, _08069A60  @ =0x00000534
	add r0, r5, r4
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	ldr r6, _08069A64  @ =0x0000053E
	add r1, r5, r6
	strb r0, [r1]
	ldr r1, _08069A68  @ =0x00000532
	add r0, r5, r1
	ldrh r3, [r0]
	add r0, r2, #0
	and r0, r0, r3
	add r4, r4, #4
	add r1, r5, r4
	strb r0, [r1]
	and r2, r2, r3
	mov r0, #2
	and r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r2, r2, r0
	cmp r2, #3
	bne _08069A6C
	sub r6, r6, #5
	add r1, r5, r6
	mov r0, #1
	b _08069A72
	.byte 0x00
	.byte 0x00
_08069A60:
	.4byte 0x00000534
_08069A64:
	.4byte 0x0000053E
_08069A68:
	.4byte 0x00000532
_08069A6C:
	ldr r0, _08069A94  @ =0x00000539
	add r1, r5, r0
	mov r0, #0
_08069A72:
	strb r0, [r1]
	ldr r1, _08069A98  @ =0x00000534
	add r0, r5, r1
	ldrh r2, [r0]
	mov r1, #1
	and r1, r1, r2
	mov r0, #2
	and r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r1, r0
	cmp r1, #3
	bne _08069AA0
	ldr r2, _08069A9C  @ =0x0000053F
	add r1, r5, r2
	mov r0, #1
	b _08069AA6
_08069A94:
	.4byte 0x00000539
_08069A98:
	.4byte 0x00000534
_08069A9C:
	.4byte 0x0000053F
_08069AA0:
	ldr r3, _08069CC4  @ =0x0000053F
	add r1, r5, r3
	mov r0, #0
_08069AA6:
	strb r0, [r1]
_08069AA8:
	add r6, r5, #0
	ldr r4, _08069CC8  @ =0x00000532
	add r4, r4, r6
	mov r8, r4
	ldrh r1, [r4]
	add r5, r1, #0
	mov r4, #2
	add r0, r4, #0
	and r0, r0, r5
	mov r2, #0
	mov r10, r2
	ldr r3, _08069CCC  @ =gUnknown_0300276A
	strb r0, [r3]
	mov r7, #128
	lsl r7, r7, #2
	add r0, r7, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #24
	ldr r1, _08069CD0  @ =0x0000053B
	add r1, r1, r6
	mov r12, r1
	strb r0, [r1]
	mov r3, #4
	add r0, r3, #0
	and r0, r0, r5
	ldr r2, _08069CD4  @ =0x0000053C
	add r1, r6, r2
	strb r0, [r1]
	mov r2, #8
	add r0, r2, #0
	and r0, r0, r5
	ldr r5, _08069CD8  @ =0x0000053D
	add r1, r6, r5
	strb r0, [r1]
	ldr r0, _08069CDC  @ =0x00000534
	add r0, r0, r6
	mov r9, r0
	ldrb r1, [r0]
	and r4, r4, r1
	add r5, r5, #3
	add r0, r6, r5
	strb r4, [r0]
	add r0, r7, #0
	mov r4, r9
	ldrh r4, [r4]
	and r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #24
	add r5, r5, #1
	add r4, r6, r5
	strb r0, [r4]
	and r3, r3, r1
	add r5, r5, #1
	add r0, r6, r5
	strb r3, [r0]
	and r2, r2, r1
	ldr r1, _08069CE0  @ =0x00000543
	add r0, r6, r1
	strb r2, [r0]
	ldr r3, _08069CE4  @ =0x00000544
	add r2, r6, r3
	mov r5, r10
	strb r5, [r2]
	sub r1, r1, #11
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069B36
	mov r0, #128
	strb r0, [r2]
_08069B36:
	mov r3, r12
	ldrb r0, [r3]
	cmp r0, #0
	beq _08069B44
	ldrb r0, [r2]
	add r0, r0, #64
	strb r0, [r2]
_08069B44:
	mov r5, r8
	ldrh r1, [r5]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08069B56
	ldrb r0, [r2]
	add r0, r0, #32
	strb r0, [r2]
_08069B56:
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08069B68
	ldrb r0, [r2]
	add r0, r0, #16
	strb r0, [r2]
_08069B68:
	ldr r0, _08069CE8  @ =0x00000546
	add r2, r6, r0
	mov r5, r10
	strb r5, [r2]
	ldr r5, _08069CEC  @ =0x0000053E
	add r0, r6, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069B7E
	mov r0, #128
	strb r0, [r2]
_08069B7E:
	ldrb r0, [r4]
	cmp r0, #0
	beq _08069B8A
	ldrb r0, [r2]
	add r0, r0, #64
	strb r0, [r2]
_08069B8A:
	mov r0, r9
	ldrh r5, [r0]
	add r0, r7, #0
	and r0, r0, r5
	cmp r0, #0
	beq _08069B9C
	ldrb r0, [r2]
	add r0, r0, #32
	strb r0, [r2]
_08069B9C:
	add r0, r3, #0
	and r0, r0, r5
	cmp r0, #0
	beq _08069BAA
	ldrb r0, [r2]
	add r0, r0, #16
	strb r0, [r2]
_08069BAA:
	ldr r3, _08069CF0  @ =0x00000545
	add r2, r6, r3
	mov r5, #0
	strb r5, [r2]
	ldr r4, _08069CCC  @ =gUnknown_0300276A
	ldrb r0, [r4]
	cmp r0, #0
	beq _08069BBE
	mov r0, #128
	strb r0, [r2]
_08069BBE:
	ldr r3, _08069CF4  @ =0x00000539
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069BCE
	ldrb r0, [r2]
	add r0, r0, #64
	strb r0, [r2]
_08069BCE:
	ldr r4, _08069CD8  @ =0x0000053D
	add r0, r6, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069BDE
	ldrb r0, [r2]
	add r0, r0, #32
	strb r0, [r2]
_08069BDE:
	ldr r3, _08069CD4  @ =0x0000053C
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069BEE
	ldrb r0, [r2]
	add r0, r0, #16
	strb r0, [r2]
_08069BEE:
	mov r4, #64
	mov r8, r4
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08069C00
	ldrb r0, [r2]
	add r0, r0, #8
	strb r0, [r2]
_08069C00:
	mov r4, #128
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08069C10
	ldrb r0, [r2]
	add r0, r0, #4
	strb r0, [r2]
_08069C10:
	mov r0, #32
	mov r9, r0
	and r0, r0, r1
	cmp r0, #0
	beq _08069C20
	ldrb r0, [r2]
	add r0, r0, #2
	strb r0, [r2]
_08069C20:
	mov r7, #16
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08069C30
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08069C30:
	ldr r1, _08069CF8  @ =0x00000547
	add r3, r6, r1
	strb r5, [r3]
	mov r2, #168
	lsl r2, r2, #3
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069C44
	strb r4, [r3]
_08069C44:
	ldr r5, _08069CC4  @ =0x0000053F
	add r0, r6, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069C54
	ldrb r0, [r3]
	add r0, r0, #64
	strb r0, [r3]
_08069C54:
	ldr r1, _08069CE0  @ =0x00000543
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069C64
	ldrb r0, [r3]
	add r0, r0, #32
	strb r0, [r3]
_08069C64:
	ldr r2, _08069CFC  @ =0x00000542
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08069C74
	ldrb r0, [r3]
	add r0, r0, #16
	strb r0, [r3]
_08069C74:
	ldr r5, _08069CDC  @ =0x00000534
	add r2, r6, r5
	ldrh r1, [r2]
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08069C88
	ldrb r0, [r3]
	add r0, r0, #8
	strb r0, [r3]
_08069C88:
	ldrh r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	add r2, r1, #0
	cmp r0, #0
	beq _08069C9A
	ldrb r0, [r3]
	add r0, r0, #4
	strb r0, [r3]
_08069C9A:
	mov r0, r9
	and r0, r0, r2
	cmp r0, #0
	beq _08069CA8
	ldrb r0, [r3]
	add r0, r0, #2
	strb r0, [r3]
_08069CA8:
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08069CB6
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_08069CB6:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08069CC4:
	.4byte 0x0000053F
_08069CC8:
	.4byte 0x00000532
_08069CCC:
	.4byte gUnknown_0300276A
_08069CD0:
	.4byte 0x0000053B
_08069CD4:
	.4byte 0x0000053C
_08069CD8:
	.4byte 0x0000053D
_08069CDC:
	.4byte 0x00000534
_08069CE0:
	.4byte 0x00000543
_08069CE4:
	.4byte 0x00000544
_08069CE8:
	.4byte 0x00000546
_08069CEC:
	.4byte 0x0000053E
_08069CF0:
	.4byte 0x00000545
_08069CF4:
	.4byte 0x00000539
_08069CF8:
	.4byte 0x00000547
_08069CFC:
	.4byte 0x00000542
	THUMB_FUNC_END sub_0806995C

